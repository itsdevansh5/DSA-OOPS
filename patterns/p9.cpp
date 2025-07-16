#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    int size=n;
    int gap;
    for(int i=n;i>0;i=i-2){
        gap=size-i;
        cout<<string(gap/2,' ')+string(i,'*')+string(gap/2,' ')<<endl;



    }
    return 0;
}