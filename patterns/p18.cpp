#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout<<"enter pattern number : ";
    cin>>n;
    int size=n;
    int gap;
    for(int i=0;i<size/2;i++){
        gap=2*i;
        if(gap==2*((size/2)-1))
        cout<<string((size-gap)/2,'*')+string(gap,' ')+string((size-gap)/2,'*');
        else
        cout<<string((size-gap)/2,'*')+string(gap,' ')+string((size-gap)/2,'*')<<endl;
    }
   for(int j=size/2;j>=0;j--){
    gap=2*j;
    cout<<string((size-gap)/2,'*')+string(gap,' ')+string((size-gap)/2,'*')<<endl;
    
   }

    return 0;
}