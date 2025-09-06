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
LL * search(LL *head,int data){
    LL *temp=head;
    while((temp!=nullptr)&&(temp->data!=data)){
        temp=temp->next;
    }
    return temp;
}
int main() {
    LL *head= new LL(1);
    LL *two =new LL(2);
    LL *three =new LL(3);
    head->next=two;
    two->next=three;
    auto ptr=search(head,2);
    auto ptr1=search(head,4);
    cout<<ptr->data<<endl;
    if(ptr1==nullptr)
    cout<<"worked";

    
    return 0;
}