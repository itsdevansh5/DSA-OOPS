#include<bits/stdc++.h>
using namespace std;
struct cl{
    int data;
    cl *next;
    cl(int x){
        this->data=x;
        this->next=nullptr;
    }

};
void traversal(cl * head){
    cl *temp=head;
    do{
        cout<<temp->data<<"--";
        temp=temp->next;

    }while(temp!=head);
    
}
void insert(cl *&head,int pos,int d){ 
     //1 based indexing
     cl * n=new cl(d);
     if(pos==1){
       
        cl * last=head;
        while(last->next!=head){
            last=last->next;
        }
         n->next=head;
        head=n;
        last->next=head;
        return;
     }
     cl * temp=head;
     while(pos>2){
        temp=temp->next;
        pos--;
     }
     if(temp->next==head){
        n->next=head;
        temp->next=n;
        return;
     }
     n->next=temp->next;
     temp->next=n;
     return ;


}
void del(cl *& head,int pos){    //improve by adding edge cases for 0 and 1 node
    // 1 based indexing
    if(pos==1){
        cl * todel=head;
        head=head->next;
        cl *last=head;
        while(last->next!=head){
            last=last->next;
        }
        last->next=head;
        delete todel;
        return;


    }
    cl * temp=head;
    while(pos>2){
        temp=temp->next;
        pos--;

    }
    if(temp->next->next==head){
        cl *todel=temp->next;
        temp->next=head;
        delete todel;
        return ;


    }
    cl * todel=temp->next;
    temp->next=temp->next->next;
    delete todel;
    return ;



}
cl *  reverse(cl * &head){
    cl * curr =head;
    cl * prev;
    cl * next;
    prev=curr;
    curr=curr->next;
    while(curr!=head){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

        

    }
    head->next=prev;
    return prev;



}
int main() {
    cl *head=new cl(1);
    cl * two=new cl(2);
    cl * three =new cl(3);
    cl *four =new cl(4);
    head->next=two;
    two->next=three;
    three->next=four;
    four->next=head;
    traversal(head);
    insert(head,5,5);
    insert(head,1,0);
    insert(head,3,8);
    traversal(head);
    cl * h=reverse(head);
    traversal(h);


    
    return 0;
}
  

//there is circular doubly linked lists also do it when free