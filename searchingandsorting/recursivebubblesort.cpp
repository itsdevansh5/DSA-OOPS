#include<bits/stdc++.h>
using namespace std;
void BubbleSort(vector<int> &arr){
    int size=arr.size();
   static int i=0;
    if(i==size-1){
        return ;
    }
    else{
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
        i++;
        BubbleSort(arr);
    }
}

int main() {
    vector<int>arr={5,2,1,3,4};
    BubbleSort(arr);
    for(auto it:arr){
        cout<<it<<" ";
    }

    
    return 0;
}
//had i set bubblesort return type vector then i need to use return bubblesort(arr)