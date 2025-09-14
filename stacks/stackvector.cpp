#include<bits/stdc++.h>
using namespace std;

template <typename T>
class mystack {
    vector<T> arr;
public:
    mystack() {}

    void push(T d) {
        arr.push_back(d);
    }
    void pop() {
        if (arr.empty()) {
            cout << "empty";
            return;
        }
        arr.pop_back();
    }
    T peek() {
        if (arr.empty()) {
            cout << "empty";
            return T();
        }
        return arr.back();
    }
    bool isempty() {
        return arr.empty();
    }
};

int main() {
    mystack<int> s1;
    s1.push(10);
    s1.push(20);
    cout << s1.peek() << endl; // 20
    s1.pop();
    cout << s1.peek() << endl; // 10
    return 0;
}