#include<bits/stdc++.h>
using namespace std;
int main() {
    stringstream ss;
    string aboutme;
    getline(cin,aboutme);
    ss<<aboutme;
    cout<<aboutme;
    string *tokens=new string[3];
    for(int i=0;i<3;i++){
        getline(ss,tokens[i],',');
    }
    for(int i=0;i<3;i++){
        cout<<tokens[i]<<endl;
    }
    delete [] tokens;
    tokens=nullptr;

    return 0;
}