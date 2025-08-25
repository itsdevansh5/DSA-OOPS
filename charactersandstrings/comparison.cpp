#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1="arjun";
    string s2="devansh";
    string s3=s2;
    cout<<s3<<endl;
    cout<<boolalpha<<(s1<s2)<<endl;
    //using string compare method
    cout<<s1.compare(s2);
    return 0;
}