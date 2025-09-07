#include<bits/stdc++.h>
using namespace std;
struct LL{
    int data;
    LL *next;
    LL(int k){
        this->data=k;
        this->next=nullptr;
    }
};
void reverse(LL *&head,LL * curr,LL *prev,LL *next){
    if(curr==nullptr){
        head=prev;
        return;
    }
    else{
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        reverse(head,curr,prev,next);
    }
}
void traverse(LL*head){
    LL*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main() {
     LL *head= new LL(1);
    LL *two =new LL(2);
    LL *three =new LL(3);
    LL * four =new LL(4);
    head->next=two;
    two->next=three;
    three->next=four;
    reverse(head,head,nullptr,nullptr);
    traverse(head);
    
    return 0;
}