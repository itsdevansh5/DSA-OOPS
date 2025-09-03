#include<bits/stdc++.h>
using namespace std;
struct LL{
    int data;
    LL * next;

};
int main() {
    LL * head;
    LL *first=new LL;
    head=first;
    first->data=5;
    first->next=nullptr;
    cout<<head->data;

    
    return 0;
}