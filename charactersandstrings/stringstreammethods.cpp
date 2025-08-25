#include<bits/stdc++.h>
using namespace std;
int main() {
    string about;
    int age=21;
    string name="devansh trivedi";
    string city="bareilly";
    stringstream ss;
    ss<<name<<age<<city;
    about=ss.str();  //without arguments,getting string buffer
    cout<<about<<endl;
    ss.str("new set"); //with args,setting new string buffer
    about=ss.str();
    cout<<about;
    ss.clear();  //actually not needed here,only needed after a failed operation
    about=ss.str();
    cout<<about;



    return 0;
}