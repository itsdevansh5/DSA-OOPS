#include<bits/stdc++.h>
using namespace std;
typedef struct student{
    int a;
    student * h;
}s;
int main() {
    s s1;
    s1.a=10;
    s s2;
    s1.h=&s2;
    s2.a=45;
    cout<<s1.h->a;

    
    return 0;
}