#include<iostream>
#include<stdexcept>
using namespace std;

int main() {
    int a, b;
    cout << "enter two numbers to divide: ";
    cin >> a >> b;
    try {
        if (b == 0)
            throw std::runtime_error("error");
        cout << (a / b);
    }
    catch (const std::exception& e) {
        cout << e.what();
    }
    return 0;
}