#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter input : ";
    cin>>a;
    switch(a){
        case 1:
        cout<<"Mon";
        break;
        case 2:
        cout<<"Tues";
        break;
        case 3:
        cout<<"Wed";
        break;
        case 4:
        cout<<"thurs";
        break;
        case 5:
        cout<<"fri";
        default :
        cout<<"any othr day or invalid";
    }
    return 0;
}