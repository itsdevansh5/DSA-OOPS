#include<bits/stdc++.h>
using namespace std;
int LinearSearch(vector<int>&arr,int target){
    int size=arr.size();
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    
    
}

int main() {
    vector<int>arr={2,4,7,9,3};
    cout<<LinearSearch(arr,9);
    
    return 0;
}