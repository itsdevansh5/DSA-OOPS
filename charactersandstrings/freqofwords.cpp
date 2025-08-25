#include<bits/stdc++.h>
using namespace std;
int main() {
    string about="devansh is devansh trivedi is trivedi";
    stringstream ss(about);
    unordered_map<string,int>freq;
    string word;
    while(ss>>word){
        freq[word]++;
    }
    for(auto i:freq){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    return 0;
}