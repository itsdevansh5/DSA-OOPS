#include<iostream>
using namespace std;

int main() {
    void *a;
    char b='I';
    a=&b;
    cout<<(*(char*)a)<<endl;
    cout<<"Enter size of char array: ";
    int n;
    cin>>n;
    cin.ignore();
    char *ptr=new char[n+1];
    ptr[n]='\0';
    for(int i=0;i<n;i++){
        cout<<"enter value "<<(i+1)<<" : ";
        cin.get(*(ptr+i));

        


    }
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<endl;
    }
    cout<<ptr;
    delete[] ptr;
    ptr=nullptr;



    return 0;
}