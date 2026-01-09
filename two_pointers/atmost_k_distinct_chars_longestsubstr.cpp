#include<bits/stdc++.h>
using namespace std;

int lsub(string a, int k) {
    int i = 0;
    unordered_map<char,int> mp;
    int maxl = 0;

    for(int j = 0; j < a.size(); j++){
        mp[a[j]]++;

        while(mp.size() > k){
            char r = a[i];
            mp[r]--;
            if(mp[r] == 0) mp.erase(r);
            i++;
        }

        maxl = max(maxl, j - i + 1);
    }
    return maxl;
}

int main(){
    int t;
    cin >> t;         

    while(t--){
        string a;
        int k;
        cin >> a >> k;
        cout << lsub(a, k) << endl;
    }
    return 0;
}
