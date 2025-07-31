#include<bits/stdc++.h>
int *hash(int *arr,int size){
int *hashar=new int[size+1]();
    for(int i=0;i<size;i++){
        hashar[arr[i]]++;


    }
    return hashar;
}

int main() {
    int arr[12]={1,1,1,3,3,4,4,4,4,5,5,8};
    int *hello=hash(arr,12);
    std::cout<<hello[3]<<std::endl;

    
    return 0;
}