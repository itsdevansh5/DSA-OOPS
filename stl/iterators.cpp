#include<bits/stdc++.h>

int main() {
    std::vector<int>myvec{1,2,3,4,5};
    auto it=myvec.begin();
    auto it2=myvec.end();
    std::advance(it,3);
    std::cout<<*(it);
    it=std::next(it,1);
    std::cout<<*(it)<<std::endl;
    it=std::prev(it,1);
    std::cout<<*(it);
    return 0;
}