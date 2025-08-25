#include<bits/stdc++.h>
using namespace std;
int main() {
    string num="87654";
    int n=stoi(num,nullptr,10);  //nullptr is used as i dont want the position of first unconverted char
    cout<<n;
    char arr[5]="devd";
    int p=atoi(arr); //returns 0 as string doesnt starts with any integer
    cout<<p<<endl;
    stringstream ss(num);
    int q;
    ss>>q;
    cout<<q<<endl;

    return 0;
}