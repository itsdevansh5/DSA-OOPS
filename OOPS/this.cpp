#include<iostream>
using namespace std;
class A{
    public:
    int a=10;
    int b=5;
    public:
    void print(int n){
        cout<<n+30<<endl;
        this->a=a+3;
    }
};

int main() {
    A a1;
    a1.print(4);
    cout<<a1.a;
    

    return 0;
}