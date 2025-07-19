#include<iostream>
using namespace std;
class B;

class A{
    int a=5;
    int b=7;
    friend int operator+(A &obj1,B &obj2);
    

};
class B{
    int m=6;
    int n=3;
    friend int operator+(A & obj1,B &obj2);
};
int operator+(A &obj1,B&obj2){
    
    return obj1.a+obj2.m;
}

int main() {
    A a1;
    B b1;
    cout<<a1+b1;
    
    return 0;
}