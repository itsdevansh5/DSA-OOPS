#include<iostream>
using namespace std;

class A{
    public:
    int a;
    int b;
    public:
    A(){
        cout<<"enter a :";
        cin>>this->a;
        cout<<"enter b :";
        cin>>this->b;
    }
    
};

int main() {
    A a1;
    cout<<a1.a<<" "<<a1.b;
    
    return 0;
}