#include<bits/stdc++.h>
using namespace std;
void PrintMax(vector<int>&nums,int k){
    deque<int>dq;
    for(int j=0;j<nums.size();j++){
        while(!dq.empty() && dq.front()<=j-k){
            dq.pop_front();
        }
        while(!dq.empty() && nums[dq.back()]<nums[j]){
            dq.pop_back();
        }
        dq.push_back(j);
        if(j>=k-1) cout<<nums[dq.front()]<<endl;
    }
}
void PrintMin(vector<int>&nums,int k){
    deque<int>dq;
    for(int j=0;j<nums.size();j++){
        while(!dq.empty() && dq.front()<=j-k){
            dq.pop_front();
        }
        while(!dq.empty() && nums[dq.back()]>nums[j]){
            dq.pop_back();
        }
        dq.push_back(j);
        if(j>=k-1) cout<<nums[dq.front()]<<endl;
    }
}
int main() {
    vector<int>arr={3,9,1,2,5,10,2,4,6,1,8};
    PrintMin(arr,3);
    return 0;
}