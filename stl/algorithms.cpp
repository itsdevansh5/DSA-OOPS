#include<bits/stdc++.h>

int main() {
    std::list<int>mylist{5,7,9,11,13,9};
    auto i=std::find(mylist.begin(),mylist.end(),9);
    std::cout<<*(i)<<std::endl;
    std::cout<<std::count(mylist.begin(),mylist.end(),9)<<std::endl;
    std::vector<char>myvec{'b','d','a'};
    std::sort(myvec.begin(),myvec.end(),[](int a,int b){return a>b;});  //comparator is optional parameter unless dont want default ascending sort
   
    //descending sort by comparator
    std::for_each(mylist.begin(),mylist.end(),[](int x){std::cout<< x*x<<std::endl;});
    std::vector<int>myvec2(6);
    std::transform(mylist.begin(),mylist.end(),myvec2.begin(),[](int x){return x*x;});
     for(auto i:myvec2){
        std::cout<<i<<std::endl;
    }
    std::list<int>dev{5,7,9};
    auto g=std::search(mylist.begin(),mylist.end(),dev.begin(),dev.end());
    std::cout<<*(g)<<std::endl;
    g++;
    std::cout<<*(g);
    






    return 0;
}