#include<bits/stdc++.h>
using namespace std;
int main() {
    int a=-4;
    cout<<(a%5);
    return 0;
}
// in cpp modulus is defined as a%b=(a-(a/b)*b)
// where a/b is interger division of a and b 
// the sign of remainder or mod result depends on dividend only
// mod can be negative in cpp
// to make it positive,((a%m)+m)%m
