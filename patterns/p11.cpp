#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout<<"enter pattern number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<string(i,'*')<<endl;
    }
    for(int j=n;j>=1;j--){
        cout<<string(j,'*')<<endl;
    }
    return 0;
}