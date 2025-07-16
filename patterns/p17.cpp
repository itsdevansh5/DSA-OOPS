#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    int a=65;
    int k;
    for(int i=0;i<=n;i++){
        k=(n-1)-i;
        for(int j=k;j<=n-1;j++){
            cout<<(char)(a+j);
        }
        cout<<endl;
    }
    return 0;
}