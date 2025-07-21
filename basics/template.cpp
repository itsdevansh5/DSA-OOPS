//function templates
#include<bits/stdc++.h>
using namespace std;
template<class T> T sum(T x,T y){
    return(x+y);

}
int main(){
    cout<<sum<int>(5,6)<<endl;
    cout<<sum<string>("abc","cde");

}

