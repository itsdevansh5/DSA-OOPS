#include<bits/stdc++.h>
using namespace std;
int main() {
    string a="hello";
    string b="devansh";
    a=a+" "+b;
    cout<<a<<endl;
    string c="trivedi";
    a.append(c);  //more efficient less time comp
    cout<<a;
    return 0;
}
//we can also concat using for loop for each char of second string one by one