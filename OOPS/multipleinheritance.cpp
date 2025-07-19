#include<iostream>
using namespace std;

class A{
    public:
    void print(){
        cout<<"printing a";
    }
};
class B{
    public:
    void print(){
        cout<<"printing b";

    }
};
class C:public A,public B{
    public:
    void print(){
        cout<<"printing c";

    }
};

int main() {
    C c1;
    c1.print();
    c1.A::print();  //Ambiguity issues like same named function error can be solved
                    // by using scope resolution operator like here,otherwise base class function is called.
    return 0;
}