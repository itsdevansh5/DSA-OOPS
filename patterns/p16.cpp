#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    int a=65;
    int size=2*n-1;
    int gap;
    for(int i=0;i<n;i++){
        gap=size-(2*i+1);
        cout<<string(gap/2,' ');
        for(int j=0;j<=i;j++){
            cout<<(char)(a+j);
        }
        for(int k=i-1;k>=0;k--){
            cout<<(char)(a+k);
        }
        cout<<string(gap/2,' ')<<endl;
    }
    return 0;
}