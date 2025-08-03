#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int>&arr,int target){
    sort(arr.begin(),arr.end());     //Binary search is used only for sorted arrays
    int size=arr.size();
    int l=0;
    int h=size-1;
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(arr[mid]==target)
        return mid;
        else if(arr[mid]>target)
        h=mid-1;
        else
        l=mid+1;
    }
    return -1;
}

int main() {
    vector<int>arr={3,5,6,2,3,8,9};
    cout<<BinarySearch(arr,5);
    return 0;
}