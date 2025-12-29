#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

/**
 * @brief Generates a valid sequence of 2*N multipliers.
 * The strategy is to keep the coolness at 1 for the first N days, 
 * multiply by B on day N+1, and multiply by 1 for the remaining days.
 * This guarantees:
 * 1. Coolness after N days is 1, which satisfies 1 <= A (since A >= 1).
 * 2. Final coolness after 2*N days is B.
 * * @param N The number of days in the first phase.
 * @param A The maximum coolness allowed after N days (unused by this simple strategy, but guaranteed valid).
 * @param B The exact final coolness required.
 * @return A vector of 2*N integers representing the multipliers for each day.
 */
vector<int> generate_sequence(int N, int A, int B) {
    vector<int> multipliers;
    
    // Phase 1 (Days 1 to N): Multiplier is 1
    // Coolness = 1. Constraint 1 <= A is always met.
    for (int i = 0; i < N; ++i) {
        multipliers.push_back(1);
    }
    
    // Phase 2 (Days N+1 to 2*N):
    
    // Day N+1: Multiplier is B. Coolness jumps to B.
    multipliers.push_back(B);
    
    // Days N+2 to 2*N: Multiplier is 1. Coolness remains B.
    for (int i = 0; i < N - 1; ++i) {
        multipliers.push_back(1);
    }
    
    return multipliers;
}

void solve() {
    int N, A, B;
    // Read N, A, and B for the current test case
    if (!(cin >> N >> A >> B)) {
        return;
    }
    
    vector<int> result = generate_sequence(N, A, B);
    
    // Print the sequence of multipliers
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << (i == result.size() - 1 ? "" : " ");
    }
}

int main() {
    // Fast I/O is good practice in competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (!(cin >> T)) {
        return 0;
    }
    
    for (int i = 1; i <= T; ++i) {
        cout << "Case #" << i << ": ";
        solve();
        cout << "\n";
    }
    
    return 0;
}