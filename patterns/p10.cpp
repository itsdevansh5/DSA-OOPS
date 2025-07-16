#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout<<"enter pyramid count : ";
    cin>>n;
    int size=n;
    int gap;
    for(int i=1;i<=n;i=i+2){
        gap=size-i;
        cout<<string(gap/2,' ')+string(i,'*')+string(gap/2,' ')<<endl;
    }
    
    for(int j=n;j>=1;j=j-2){
        gap=size-j;
        cout<<string(gap/2,' ')+string(j,'*')+string(gap/2,' ')<<endl;
    }
    return 0;
}