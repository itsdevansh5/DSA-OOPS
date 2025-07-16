#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int a;
    bool prime = true; // Assume number is prime unless proven otherwise

    cout << "Enter num: ";
    cin >> a;

    if (a <= 1) {
        prime = false; // 0 and 1 are not prime
    } else {
        for (int i = 2; i <= sqrt(a); i++) {
            if (a % i == 0) {
                prime = false; // Found a divisor, not prime
                break;
            }
        }
    }

    if (prime)
        cout << "Prime";
    else
        cout << "Not prime";

    return 0;
}

