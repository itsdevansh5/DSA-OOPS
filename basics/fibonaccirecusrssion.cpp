#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;     // base case 1
    if (n == 1) return 1;     // base case 2

    return fibonacci(n - 1) + fibonacci(n - 2); // recursive call
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i <= n; i++) {
        cout << "F(" << i << ") = " << fibonacci(i) << "\n";
    }

    return 0;
}
