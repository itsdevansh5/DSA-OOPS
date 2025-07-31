#include<bits/stdc++.h>
int freq_count(int * arr,int size,int element){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    int arr[8]={1,1,1,3,3,4,5,5};
    std::cout<<"enter element whose frequency needed: ";
    std::cin>>n;
    std::cout<<freq_count(arr,8,n);
    return 0;
}