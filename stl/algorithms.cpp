#include<bits/stdc++.h>

int main() {
    std::list<int>mylist{5,7,9,11,13,9};
    auto i=std::find(mylist.begin(),mylist.end(),9);
    std::cout<<*(i)<<std::endl;
    std::cout<<std::count(mylist.begin(),mylist.end(),9)<<std::endl;
    std::vector<char>myvec{'b','d','a'};
    std::sort(myvec.begin(),myvec.end(),[](int a,int b){return a>b;});  //comparator is optional parameter unless dont want default ascending sort
    for(auto i:myvec){
        std::cout<<i<<std::endl;
    }
    //descending sort by comparator





    return 0;
}