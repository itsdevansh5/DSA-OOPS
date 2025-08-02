#include<bits/stdc++.h>

int main() {
    std::map<int,int>hashmap;
    int arr[12]={1,1,1,1,3,3,4,4,4,5,5,6};
    for(int i=0;i<12;i++){
        hashmap[arr[i]]++;
    }
    std::cout<<hashmap[4]<<" "<<hashmap[1]<<std::endl;
    for(auto i:hashmap){
        std::cout<<i.first<<" "<<i.second<<std::endl;
    }

    return 0;
}