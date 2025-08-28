#include<bits/stdc++.h>
using namespace std;
typedef struct student{
int a;
} s;

int main() {
    //just like pointers for int vars,char vars,we have pointers to struct variables
    // normal way is to first dereference struct var with * and then use . opertor 
    // but we can use -> directly;
s s1;
s1.a=565;
s * h=&s1;
cout<<(*(h)).a<<endl;
cout<<h->a;

    return 0;
}