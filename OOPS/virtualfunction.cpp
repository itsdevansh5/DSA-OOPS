#include<iostream>
using namespace std;
class A{
    public:
    void print(){
        cout<<"printing base class"<<endl;
    }
};
class B:public A{
    public:
    void print() {
        cout<<"printing derived class"<<endl;
    }
};

int main() {
    A a1;
    a1.print();
    B b1;
    b1.print();
    b1.A::print();
    B *ptr=new B();
    ptr=&b1;
    ptr->print();
    delete ptr;
    ptr=nullptr;
    return 0;
}