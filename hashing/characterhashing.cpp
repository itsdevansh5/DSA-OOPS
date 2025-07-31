#include<bits/stdc++.h>
using namespace std;

int main() {
    int hashar[26]={0};
    string input;
    cin>>input;
    //hashing
    for(char s:input){
        hashar[(int)s-97]++;
    }
    //fetching
    cout<<hashar[3];
    return 0;
}