#include<iostream>
using namespace std;

class A{
    protected:
    int a=5;
    protected:
    void printa(){
        cout<<"printing class A";
    }
};
class B:public A{
protected:
int b=6;
public:
void printb(){
    cout<<"printing class B";

}
};
class C:public B{
protected:
int c=7;
void printc(){
    cout<<"printing class C";
}
};

int main() {
    A a1;
    B b1;
    C c1;
    c1.printb();

    
    return 0;
}