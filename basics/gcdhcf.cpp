#include<iostream>
using namespace std;

int main() {
    int n1,n2;
    cout<<"enter smaller number :";
    cin>>n1;
    cout<<"enter larger number :";
    cin>>n2;
    int temp;
    while(n2!=0){
        temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    cout<<temp;

    return 0;
}