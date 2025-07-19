#include<iostream>
using namespace std;
class A{
    private:
    int a=10;
    int b=6;
    friend int sum(A obj);
    public :
    int Print(){
        int t;
        t=this->a;
        cout<<t;
    }
    
};
int sum(A obj){
    obj.a=obj.a+10;
    return obj.a;
}

int main() {
    int res;
    A o1;
    res=sum(o1);
    cout<<res<<endl;
    o1.Print();

    return 0;
}