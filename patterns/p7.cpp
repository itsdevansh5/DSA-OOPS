#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int m = 1;

    for (int i = 1; i <= n; i++) {
        int w = (n - i) * 3;
        if (w > 0)
            cout << string(w, ' ');

        for (int j = 1; j <= i; j++) {
            if (m < 10)
                cout << m << "  ";
            else
                cout << m << " ";
            m++;
        }

        cout << endl;
    }

    return 0;
}
