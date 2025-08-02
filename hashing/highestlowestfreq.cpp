#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[12]={1,1,1,1,4,4,4,5,5,6,7,8};
    unordered_map<int,int>hashmap;
    for(int i=0;i<12;i++){
        hashmap[arr[i]]++;
    }
    //sorting values of hashmap
    vector<pair<int,int>>sortedhash;
    for(auto i:hashmap){
        sortedhash.push_back({i.first,i.second});


    }
    sort(sortedhash.begin(),sortedhash.end(),[](const pair<int,int> &a,const pair<int,int> &b){return a.second<b.second; });
    cout<<"lowest frequency -- "<<sortedhash[0].first<<" ->"<<sortedhash[0].second<<endl;
    cout<<"highest frequency --"<<(*(sortedhash.end()-1)).first<<" ->"<<(*(sortedhash.end()-1)).second;

    return 0;
}