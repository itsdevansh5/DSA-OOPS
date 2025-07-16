#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}

int main() {
    // your code here
    int (*funcptr)(int,int)=add;
    int result;
    result=funcptr(5,9);
    cout<<result;
    return 0;
}