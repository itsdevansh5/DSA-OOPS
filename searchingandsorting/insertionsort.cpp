#include<bits/stdc++.h>
using namespace std;
vector<int> InsertionSort(vector<int>& arr){
    int size=arr.size();
    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key ){
            arr[j+1]=arr[j];
            j--;
            
        }
        arr[j+1]=key;

        
        

    }
    return arr;

}

int main() {
    vector<int>arr={5,3,2,1,4};
    auto vec=InsertionSort(arr);
    for(auto i:vec){
        cout<<i<<" ";
    }

    
    return 0;
}