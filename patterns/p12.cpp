#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    bool v=true;
    for(int i=1;i<=n;i++){
        if(i%2==0)
        v=false;
        else
        v=true;
        for(int j=1;j<=i;j++){
            cout<<(int)v;
            v=!v;



        }
        
        cout<<endl;
    }
    return 0;
}