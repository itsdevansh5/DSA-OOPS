#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="devansh trivedi";
    string m="hello,world";
    s.swap(m);
    cout<<s<<endl;
    auto it=m.find("trivedi");
    cout<<m[it]<<endl;
    m.erase(m.begin());
    cout<<m;

    return 0;
}