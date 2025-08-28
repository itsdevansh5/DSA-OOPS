#include<bits/stdc++.h>
using namespace std;
struct sum{
    int a;
    int b;
};
int p(sum s){
    return --s.a;   //if used here post decrement s.a--,it would have returned 8 i.e s.a only 
}
int t(sum &s){
    return --s.a;
}
sum g(sum &s){
    s.a=4;
    return s;
}
int main() {
    sum h;
    h.a=8;
    h.b=7;
    cout<<p(h)<<endl; //call by value
    cout<<h.a<<endl;
    cout<<t(h)<<endl;  //call by reference
    cout<<h.a<<endl;
    sum f=g(h);
    cout<<f.a<<endl;
    cout<<h.a;
    
    return 0;
}
