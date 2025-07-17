#include<iostream>
using namespace std;

int exp(int n){
    int a=2;
    if(n==0)
    return 1;
    else
    return 2*exp(n-1);
}
int main() {
    int n;
    cout<<"enter number : ";
    cin>>n;
    cout<<exp(n);
    return 0;
}