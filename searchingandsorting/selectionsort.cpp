#include<bits/stdc++.h>
using namespace std;
vector<int> SelectionSort(vector<int>&arr){
    int size=arr.size();
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i;j<size;j++){
            if(arr[j]<arr[min])
            min=j;

            
            
        }
        swap(arr[min],arr[i]);
    }
    return arr;
}

int main() {
    vector<int>arr={5,3,1,2,4};
    auto vec=SelectionSort(arr);
    for(auto i:vec){
        cout<<i<<endl;
    }
    
    
    return 0;
}