#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout<<"enter no. of rows : ";
    cin>>n;
    int len,w;
    len=n;
    for(int i=1;i<=n;i++){
        w=n-i;
        string output = string(w,' ')+string(i,(48+i));
        cout<<output<<"\n";
    }
    
    return 0;
}