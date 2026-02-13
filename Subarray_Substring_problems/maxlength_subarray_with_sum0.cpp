#include<bits/stdc++.h>
using namespace std;
int maximumL(vector<int>& nums) {
    unordered_map<int,int> mp;
    int presum = 0, maxl = 0;

    for (int i = 0; i < nums.size(); i++) {
        presum += nums[i];

        // Case 1: sum from 0 to i is zero
        if (presum == 0)
            maxl = max(maxl, i + 1);

        // Case 2: prefix sum seen before
        if (mp.find(presum) != mp.end()) {
            maxl = max(maxl, i - mp[presum]);
        }
        // Store first occurrence only
        else {
            mp[presum] = i;
        }
    }
    return maxl;
}
int main(){

}
