#include<bits/stdc++.h>
using namespace std;
vector<int> BubbleSort (vector<int>&arr)
{
    int size=arr.size();
    for(int j=0;j<size;j++){
    for(int i=0;i<size-j-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
}
    return arr;

}
int main() {
    vector<int>arr={4,1,2,5,3};
    auto vec=BubbleSort(arr);
    for(auto i:vec){
        cout<<i<<endl;
    }
    
    return 0;
}