#include<bits/stdc++.h>
using namespace std;
int main() {
    int a=10;
    int b=5;
    cout<<typeid(a>b).name();
    if(typeid(a)==typeid(int))
    cout<<"true";
    return 0;
}