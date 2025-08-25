#include<bits/stdc++.h>
using namespace std;

string revstr(string &a,int p,int q){
    if(p>q)
    return a;
    else{
        swap(a[p],a[q]);
        p++;
        q--;
        return revstr(a,p,q);
    }



}
int main() {
    string about="devansh studies in srm";
    cout<<revstr(about,0,about.size()-1);
    
    return 0;
}