#include<bits/stdc++.h>

int main() {
 std::map<int,std::string>mymap{{1,"Devansh"},{2,"Mridul"}};
 mymap.insert({3,"Navneet"});
 mymap[5]="Aekeesh";
 for(auto i:mymap){
    std::cout<<i.second<<std::endl;
 }
    return 0;
}