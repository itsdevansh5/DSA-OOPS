#include<iostream>
using namespace std;

class A{
    public:
   int a;
   int b;
   public:
   A(){
    cin>>this->a;
    cin>>this->b;

   }
   ~A(){
    cout<<"destructor called";
   }
};
int main() {
    A a1;
    cout<<a1.a<<" "<<a1.b;
    
    return 0;
}