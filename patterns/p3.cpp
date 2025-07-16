#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter num of rows : ";
    cin>>n;
    int m=0;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            m++;
            cout<<m<<" ";
        }
        cout<<"\n";
    }
    return 0;
}