#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number of rows: ";
    cin>>n;
    int b=65;
    for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++){
            cout<<(char)(b+j);
        }
        cout<<endl;
    }

    return 0;
}