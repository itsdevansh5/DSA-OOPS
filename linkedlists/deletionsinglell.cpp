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
LL * head;
void deletion(LL *& head,int pos){
    if(pos==1){
        LL *d=head;
        head=head->next;
        delete d;
        
    }
    else{
        LL *temp=head;
        int n=1;
        while(n!=pos-1){
            temp=temp->next;
            n++;
            
        }
        LL *d =temp->next;
        temp->next=temp->next->next;
        delete d;
    }



}
void traverse(LL* & head){
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
    deletion(head,2);
    traverse(head);

    
    
    return 0;
}