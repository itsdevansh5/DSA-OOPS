#include<iostream>
using namespace std;

int * revers(int * ptr,int n){
    static int i=0;
    static int j=n-1;
    if (i>=j){
        return ptr;

    }
    else{
        int temp=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=temp;
        i++;
        j--;
        revers(ptr,n);

    }
    


}

int main() {
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }
    int *rev=revers(arr,n);
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<endl;
    }
    delete[] arr;
    arr=nullptr;


    return 0;
}