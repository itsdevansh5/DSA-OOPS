#include<bits/stdc++.h>
using namespace std;
int main() {
    string about="hello everyone how are u";
    auto a=0;
    auto b=about.size()-1;
    while(a<b){
        swap(about[a],about[b]);
        a++;
        b--;
    }
    cout<<about;

    return 0;
}