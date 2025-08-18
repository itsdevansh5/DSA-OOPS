#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int>&arr,int low,int mid,int high){
    int leftr=(mid-low+1);
    int rightr=(high-mid);
    vector<int>left(leftr);
    vector<int>right(rightr);
    for(int i=0;i<leftr;i++){
        left[i]=arr[low];
        low++;
    }
    for(int j=0;j<rightr;j++){
        right[j]=arr[mid+1];
        mid++;
    }
    
    
    
    

}

void MergeSort(vector<int>&arr,int low,int high){
    if(low>=high){
        return ;
        
    }
    else{
        int mid=(low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
        
    }
    



}

int main() {
    vector<int>arr={5,4,1,2,3};
    MergeSort(arr,0,4);
    for(auto i:arr){
        cout<<i<<" ";
    }

    
    return 0;
}