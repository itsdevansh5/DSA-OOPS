#include<bits/stdc++.h>
using namespace std;
int main() {
    stringstream ss;
    int age =21;
    string name="Devansh Trivedi";
    string city="Bareilly";
    ss<<name<<" "<<age<<" "<<city;
    string finala=ss.str();
    cout<<finala;
    return 0;
}