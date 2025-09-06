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
void modify(LL *head,int nd,int pos){
    LL *temp=head;
    for(int i=1;i<pos;i++){
        temp=temp->next;

    }
    temp->data=nd;

}
int main() {
     LL *head= new LL(1);
    LL *two =new LL(2);
    LL *three =new LL(3);
    head->next=two;
    two->next=three;
    modify(head,7,3);
    cout<<three->data;
    
    return 0;
}