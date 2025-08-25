#include<bits/stdc++.h>
using namespace std;
int main() {
    string about="devansh studies in srm";
    std::reverse(about.begin(),about.end());
    cout<<about<<endl;
    stack<char>rev;
    for(auto i:about){
        rev.push(i);
    }
    about="";
    while(!rev.empty()){
        about+=(rev.top());
        rev.pop();
    }
    cout<<about;
    return 0;
}