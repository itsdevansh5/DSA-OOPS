#include<iostream>
using namespace std;
void change(int *n){
    *n=*n+1;
    cout<<*n<<" ";
}

int main() {
    int a=10;
    change(&a);
    cout<<a;

    return 0;
}