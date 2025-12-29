#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
#include <numeric>

using namespace std;

typedef long long ll;

// Modulo value: 10^9 + 7
const ll MOD = 1e9 + 7;

// Function for modular exponentiation (a^b % mod)
ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// Function to compute modular inverse using Fermat's Little Theorem
// (a^-1 % MOD) = a^(MOD-2) % MOD
ll modInverse(ll n) {
    return power(n, MOD - 2);
}

// Precompute factorials and inverse factorials up to a small limit (e_max <= 47)
const int MAX_E = 50;
ll fact[MAX_E];
ll invFact[MAX_E];

void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAX_E; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[MAX_E - 1] = modInverse(fact[MAX_E - 1]);
    for (int i = MAX_E - 2; i >= 0; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

/**
 * @brief Computes Binomial Coefficient C(n, k) mod MOD.
 * Since n can be very large (up to ~10^16) but k (the exponent e) is small (<= 47), 
 * we use the product form: C(n, k) = (n * (n-1) * ... * (n-k+1)) / k!
 * n is calculated using modular arithmetic: n = e + x*N - 1.
 * @param N The large number of days (taken modulo MOD).
 * @param e The number of items (exponent in B).
 * @param num_slots The number of slots (N or 2N).
 * @return C(e + num_slots - 1, e) mod MOD.
 */
ll combinations(ll N_mod, ll e, int num_slots) {
    // n = e + num_slots - 1
    // C(n, e) = (n * (n-1) * ... * (n-e+1)) / e!
    
    ll num_slots_mod = num_slots % MOD;
    ll n_start = (e + (num_slots_mod * N_mod) % MOD - 1 + MOD) % MOD; // (e + x*N - 1) % MOD
    
    if (e == 0) return 1;
    if (e < 0 || e >= MAX_E) return 0; // Should not happen given constraints on B
    
    ll numerator = 1;
    for (ll i = 0; i < e; ++i) {
        // (n - i) % MOD
        ll term = (n_start - i + MOD) % MOD;
        numerator = (numerator * term) % MOD;
    }
    
    // Result = (numerator * (e!)^-1) % MOD
    ll result = (numerator * invFact[e]) % MOD;
    return result;
}

// Map to store prime factors and their exponents for B
map<ll, int> prime_factors;

/**
 * @brief Finds the prime factorization of B (up to 10^14).
 */
void factorize_B(ll B) {
    prime_factors.clear();
    ll tempB = B;

    for (ll i = 2; i * i <= tempB; ++i) {
        while (tempB % i == 0) {
            prime_factors[i]++;
            tempB /= i;
        }
    }
    if (tempB > 1) {
        prime_factors[tempB]++;
    }
}

/**
 * @brief Generates all divisors of B and stores them in a vector.
 */
void get_divisors(const vector<ll>& primes, const vector<int>& exponents, int index, ll current_divisor, vector<ll>& divisors) {
    if (index == primes.size()) {
        divisors.push_back(current_divisor);
        return;
    }

    ll prime = primes[index];
    int exponent = exponents[index];
    ll p_power = 1;

    for (int i = 0; i <= exponent; ++i) {
        get_divisors(primes, exponents, index + 1, current_divisor * p_power, divisors);
        if (i < exponent) {
            p_power *= prime;
        }
    }
}

/**
 * @brief Solves the problem for a single test case.
 */
void solve_case(int case_num) {
    ll N, A, B;
    cin >> N >> A >> B;
    
    // N is large, so we only need N % MOD
    ll N_mod = N % MOD;

    // 1. Prime Factorization of B
    factorize_B(B);

    // Prepare for divisor generation
    vector<ll> primes;
    vector<int> exponents;
    for (const auto& pair : prime_factors) {
        primes.push_back(pair.first);
        exponents.push_back(pair.second);
    }

    // 2. Generate all divisors K of B
    vector<ll> divisors;
    get_divisors(primes, exponents, 0, 1, divisors);

    // 3. Sum up the counts for all valid divisors K <= A
    ll total_count = 0;

    for (ll K : divisors) {
        if (K > A) continue; // Constraint C_N <= A is not met
        
        // K is the product of the first N multipliers (c_1...c_N)
        // B/K is the product of the second N multipliers (c_{N+1}...c_{2N})
        
        // Calculate W_1(K): Ways to factor K into N parts
        ll ways_K = 1;
        ll temp_K = K;
        for (size_t i = 0; i < primes.size(); ++i) {
            ll prime = primes[i];
            int e_k = 0;
            while (temp_K % prime == 0) {
                e_k++;
                temp_K /= prime;
            }
            // Binomial coefficient for this prime: C(e_k + N - 1, e_k)
            ways_K = (ways_K * combinations(N_mod, e_k, 1)) % MOD;
        }

        // Calculate W_2(B/K): Ways to factor B/K into N parts
        ll B_div_K = B / K;
        ll ways_B_div_K = 1;
        ll temp_B_div_K = B_div_K;
        for (size_t i = 0; i < primes.size(); ++i) {
            ll prime = primes[i];
            int e_bk = 0;
            while (temp_B_div_K % prime == 0) {
                e_bk++;
                temp_B_div_K /= prime;
            }
            // Binomial coefficient for this prime: C(e_bk + N - 1, e_bk)
            ways_B_div_K = (ways_B_div_K * combinations(N_mod, e_bk, 1)) % MOD;
        }

        // Total ways for this K: W_1(K) * W_2(B/K)
        ll ways_for_K = (ways_K * ways_B_div_K) % MOD;
        total_count = (total_count + ways_for_K) % MOD;
    }

    cout << "Case #" << case_num << ": " << total_count << "\n";
}

int main() {
    // Set up standard I/O for faster processing
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Precompute factorials and modular inverses
    precompute();
    
    int T;
    if (!(cin >> T)) {
        return 0;
    }
    
    for (int i = 1; i <= T; ++i) {
        solve_case(i);
    }
    
    return 0;
}