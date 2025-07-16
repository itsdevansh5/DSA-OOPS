#include<iostream>
using namespace std;
int main()
{
    
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5;j++){
            if(j==3)
            goto gukhale;
            cout<<i<<","<<j<<"\n";
        }
    }
    gukhale:
    cout<<"Ended due to goto";
    return 0;
}