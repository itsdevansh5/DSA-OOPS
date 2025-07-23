#include<bits/stdc++.h>

int main() {
    std::multimap<std::string,std::string>mymap;
    mymap.insert({"hello","coders"});
    mymap.insert({"hello","gandu"});
    auto it=mymap.find("hello");
    std::cout<<it->second;
    std::cout<<mymap.count("hello");
    return 0;
}