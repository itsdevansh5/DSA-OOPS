#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout<<"enter pattern number : ";
    cin>>n;
    cout<<string(2*n-1,'0'+n)<<endl;
    for(int i=0;i<(2*n-1)-2;i++){
        for(int j=0;j<2*n-1;j++){
            if((j==0)||(j==2*n-2))
            cout<<n;
            else
            cout<<n-1;

        }
        cout<<endl;

    
      

        }

    cout<<string(2*n-1,'0'+n);
        return 0;
    }
