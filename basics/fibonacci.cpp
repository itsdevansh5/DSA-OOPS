#include<iostream>
using namespace std;
void fibonacci(int n){
    int a=0;
    int b=1;
    int sum=0;
    if(n>=0){
        cout<<a<<"\n";
    }
    if(n>=1){
        cout<<b<<"\n";
    }
    while(sum<=n){
        sum=a+b;
        if (sum>=n)
        break;
        cout<<sum<<"\n";
        a=b;
        b=sum;





    }

   
    
}
int main(){
    fibonacci(25);
    return 0;
}