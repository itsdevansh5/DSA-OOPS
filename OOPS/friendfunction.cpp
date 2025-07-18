#include<iostream>
using namespace std;
class A{
    private:
    int a=10;
    int b=6;
    friend int sum(const A &obj);
};
int sum(const A &obj){
    return obj.a;
}

int main() {
    int res;
    A o1;
    res=sum(o1);
    cout<<res;
    return 0;
}