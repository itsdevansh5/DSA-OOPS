#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    cout<<string(n,'*')<<endl;
    for(int i=1;i<=n-2;i++){
        cout<<'*';
        cout<<string(n-2,' ');
        cout<<'*'<<endl;
        
    }
    cout<<string(n,'*');
    return 0;
}