#include<iostream>
using namespace std;
class A{
    int a=10;
    int b=5;
    public:
    
  A(){
cout<<"parameterized constructor";
  }
  A(A &t){
    cout<<"copy constructor";
  }
};
int main() {
    A a1;
    A a2(a1);
    
    
    return 0;
}