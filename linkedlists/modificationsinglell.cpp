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
void modify(LL *&head,int nd,int pos){
    LL *temp=head;                        //I have assumed pos is in range
    for(int i=1;i<pos;i++){              //you can pass head bhere by value as well,as we are not changing head itself,values will be changed even then if pointers are passed by value
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