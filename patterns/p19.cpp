#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout<<"enter number : ";
    cin>>n;
    int size=n;
    int gap;
    for(int i=2;i<=10;i=i+2){
        gap=size-i;
        cout<<string(i/2,'*')+string(gap,' ')+string(i/2,'*')<<endl;


    }
    for(int j=size-2;j>=2;j=j-2){
        gap=size-j;
        cout<<string(j/2,'*')+string(gap,' ')+string(j/2,'*')<<endl;
    }
    return 0;
}