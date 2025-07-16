#include<iostream>
using namespace std;

int main() {
    int arr[100],n;
    cout<<"enter array size : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<"\n";
    }
    for(int i=0;i<n;i++){
        bool swapped =false;
        for(int j=0;j<n-1;j++){
            if (arr[j+1]<arr[j]){
                int swap=0;
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
                swapped=true;
            }
            
        }
        if (swapped==false)
            break;

    }
    cout<<arr[n-1]<<" ";
    cout<<arr[n-2];
    
    return 0;
}