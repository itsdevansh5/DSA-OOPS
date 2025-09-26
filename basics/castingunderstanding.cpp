#include<bits/stdc++.h>
using namespace std;
int main() {
    string n="123";
    cout<<stoi(n)+2;
    cout<<endl;
    cout<<typeid(n[2]-'0').name();  //typeof is not used in cpp,its used in C
    return 0;
}