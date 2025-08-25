#include<bits/stdc++.h>
using namespace std;
int main() {
    string m="abcde";
    for(int i=0;i<m.size();i++){
        int l=1;
        while(l!=m.size()+1-i){
        cout<<m.substr(i,l)<<endl;
        l++;
        }
        
    }
    
    return 0;
}