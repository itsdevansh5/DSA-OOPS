#include<bits/stdc++.h>
using namespace std;
vector<int>  InsertionSort(vector<int>&arr,int i=1){
    int size=arr.size();
    if(i==size){
        return arr;
    }
    else{
        int j=i-1;
        int key=arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        return InsertionSort(arr,i+1);
    }
}

int main() {
    vector<int>arr={5,2,1,3,4};
    auto vec=InsertionSort(arr,1);
    for(auto i:vec){
        cout<<i<<" ";
    }
    
    
    return 0;
}