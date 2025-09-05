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

void insert(LL* &head,int pos,int data){
    LL *temp=head;
    LL *h=new LL(data);
    if(pos==1){
        h->next=head;
        head=h;

    }
    else{
        int n=1;
        while(n!=pos-1){
            temp=temp->next;
            n++;
        }
        h->next=temp->next;
        temp->next=h;
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
    head=new LL(1);
    LL * two=new LL(2);
    LL * three =new LL(3);
    head->next=two;
    two->next=three;
    insert(head,1,0);
    insert(head,5,5);
    traverse(head);



    
    
    return 0;
}