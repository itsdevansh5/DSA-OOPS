#include<bits/stdc++.h>
using namespace std;
int main() {
    string main="hello:world";
    int pos=-1;
    for(int i=0;i<main.size();i++){
        if(main[i]==':')
        pos=i;

    }
    string aftsub=main.substr(pos);
    cout<<"after substring is- "<<aftsub<<endl;
    string befsub=main.substr(0,pos);
    cout<<"before substring is- "<<befsub;
    return 0;
}