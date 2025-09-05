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
    traverse(head);
    
    
    return 0;
}