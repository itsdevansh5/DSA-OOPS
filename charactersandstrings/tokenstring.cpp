#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="devansh trivedi studies in srm";
    //using stream,we can only tokenize on whitespaces,tab or nextline,we cant change delimeter
    string word;
    stringstream ss(s);
    while(ss>>word){
        cout<<word<<endl;
    }
    string m="devansh-hello-world";
    stringstream ms(m);
    string tok;
    while(getline(ms,tok,'-')){
        cout<<tok<<endl;
    }


    return 0;
}