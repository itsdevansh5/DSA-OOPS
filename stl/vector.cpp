#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>myvector{1,2,3,4,5};
    list<int>mylist{6,7,8,9,10,11};
    cout<<myvector.size()<<endl;
    cout<<myvector.max_size()<<endl;
    
    myvector.reserve(10);
    cout<<myvector.capacity()<<endl;
    myvector.assign(4,7);
    cout<<myvector[3]<<endl;
    auto i=mylist.begin();
    auto j=mylist.end();
    myvector.assign(i,j);
    for(auto k:myvector){
        cout<<k<<endl;
    }
    myvector.erase(myvector.begin()+2);
    myvector.erase(myvector.begin()+2,myvector.end()-2);
    vector<int>secvector{11,12,13};
    secvector.swap(myvector);

    
    
}