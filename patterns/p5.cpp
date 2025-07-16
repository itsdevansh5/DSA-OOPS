#include<iostream>
#include<string>
using namespace std;
string func(int len,int w){
    int lw=(w-len)/2;
    int rw=(w-len)-lw;
    string newinput = string(lw,' ')+string(len,'*')+string(rw,' ');
    return newinput;

}


int main() {
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1;i<=n;i=i+2){
        cout<<func(i,n)<<"\n";

    }
    return 0;
}