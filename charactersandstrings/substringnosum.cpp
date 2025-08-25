#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="1234";
    int n=s.size();
    int res=0;
    for(int i=0;i<n;i++){
        int l=1;
        while(l!=n+1-i){
            int num=stoi(s.substr(i,l));
            res+=num;
            l++;
            
        }
    }
    cout<<res;
    return 0;
}