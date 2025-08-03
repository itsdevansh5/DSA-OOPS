#include<bits/stdc++.h>
using namespace std;
vector<int> BubbleSort(vector<int> &arr){
    int size=arr.size();
   static int i=0;
    if(i==size-1){
        return arr;
    }
    else{
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
        i++;
        return BubbleSort(arr);
    }
}

int main() {
    vector<int>arr={5,2,1,3,4};
    auto i=BubbleSort(arr);
    for(auto it:i){
        cout<<it<<" ";
    }

    
    return 0;
}