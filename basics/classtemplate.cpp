#include<iostream>
using namespace std;
template<class T>
class A{
T a;
T b;
public:
A(){
    cout<<"enter first: ";
    cin>>this->a;
    cin>>this->b;
}
T sum(){
    return this->a+this->b;
}
};

int main() {
    A<int>a1;
    cout<<a1.sum()<<endl;

    
    return 0;
}