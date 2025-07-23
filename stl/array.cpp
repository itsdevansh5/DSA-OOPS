#include<bits/stdc++.h>
using namespace std;

int main() {
    // your code here
    array<int,6>myarr{3,4,5,6,7,8};
    cout<<myarr.at(0)<<endl;
    cout<<myarr.max_size()<<endl;
    cout<<get<2>(myarr);

    return 0;
}