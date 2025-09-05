#include<bits/stdc++.h>
using namespace std;
struct LL{
int data;
LL * next;
LL(int k){
    this->data=k;
    this->next=nullptr;
}
};
LL *head;
LL * insertbet(LL* &head,int pos,int data){
    LL *temp= head;
    int n=1;
    while(n!=pos-1){
        temp=temp->next;
        n++;
    }
    LL * h=new LL(data);
   
    h->next=temp->next;
    temp->next=h;
    return h;

    




}
void traverse(LL* &head){
    LL * temp=head;
    while(temp!=nullptr){
    cout<<temp->data<<endl;
    temp=temp->next;

    }
}
int main() {
    head=new LL(1);
    LL * two=new LL(2);
    LL * three =new LL(3);
    head->next=two;
    two->next=three;
    LL * h=insertbet(head,2,6);
    traverse(head);

    
    
    return 0;
}