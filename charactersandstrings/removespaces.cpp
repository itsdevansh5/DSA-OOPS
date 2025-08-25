#include<bits/stdc++.h>
using namespace std;
string removespaces(string &a){
    stringstream ss(a);
    string output;
    string ans;
    while(ss>>output){
        ans+=output;
        

    }
    return ans;

}
int main() {
    string about="devansh studies in srm";
    cout<<removespaces(about);

    return 0;
}