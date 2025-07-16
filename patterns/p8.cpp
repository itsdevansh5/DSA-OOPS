#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter no. of rows :";
    cin>>n;
    int len=2*n;
    int w;
    for (int i=1;i<=n;i++){
        w=len-i*2;
        cout<<string(w,' ');


        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}