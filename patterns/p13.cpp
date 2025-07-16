#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    int size=2*n;
    int gap;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        gap=size-2*i;
        cout<<string(gap,' ');
        for(int k=i;k>=1;k--){
            cout<<k;

        }
        cout<<endl;
  }


    return 0;
}