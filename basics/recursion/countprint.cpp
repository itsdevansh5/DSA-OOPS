#include<iostream>
using namespace std;

void print(int n){
    if(n==1){
        cout<<n;
        return;

    }
    else{
    cout<<n<<endl;
    print(n-1);
    }
}

int main() {
    int n;
    cout<<"enter number : ";
    cin>>n;
    print(n);

    return 0;
}