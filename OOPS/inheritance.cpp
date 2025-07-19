#include<iostream>
using namespace std;

class base{
    protected:
    int a=10;
    public:
    int b=50;


};
class derived: protected base{
public:
void out(){
    cout<<this->a;
}

};


int main() {
    derived d1;
    d1.out();
    
    return 0;
}