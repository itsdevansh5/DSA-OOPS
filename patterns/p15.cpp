#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout<<"enter no. of rows : ";
    cin>>n;
    int a=65;
    for(int i=0;i<n;i++){
        cout<<string(i+1,(char)(a+i))<<endl;
    }
   
return 0;
    }