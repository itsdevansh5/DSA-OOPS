#include<bits/stdc++.h>
using namespace std;
struct LL{
int data;
LL *next;
};
LL *head;
LL * Insertatbeg(LL *& head,int data){
    LL * temp=new LL;
    temp->next=head;
    head=temp;
    temp->data=data;
    return temp;
}
int main() {
    LL *first=new LL;
    head=first;
    first->data=1;
    first->next=nullptr;
    int n;
    cout<<"how many nodes to add at beginning?";
    cin>>n;
    while(n--){
        int k;
        cout<<"enter data for node";
        cin>>k;

        Insertatbeg(head,k);
        cout<<"node added";

    }
    
    return 0;
}