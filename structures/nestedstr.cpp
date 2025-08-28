#include<bits/stdc++.h>
using namespace std;
struct it{
    int k;

};
struct outer{
    int a;
    struct inner{
        int b;       //this inner strcut can be defined outside as well and be once again declared inside outer
                      // as inner var_name;
    }in;
    it h;

};
int main() {
    outer o;
    o.a=5;
    o.in={5};
    cout<<o.in.b<<endl;
    it t={10};
    outer p={5,{4},t};
    cout<<p.h.k;
    
    return 0;
}