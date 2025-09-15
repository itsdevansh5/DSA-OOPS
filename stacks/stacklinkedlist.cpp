#include<bits/stdc++.h>
using namespace std;
template <typename T>
struct stacki{
    T data;
    stacki<T> * next;
    stacki(T d){
        this->data=d;
        this->next=nullptr;
    }


 
};
template <typename T>
class mystack{
 stacki<T> * top=nullptr;
 public:
 void push(T d){
    stacki<T> * t=new stacki<T>(d);
    t->next=this->top;
    this->top=t;
 }
 void pop(){
    if(this->top==nullptr)
    cout<<"empty";
    else{
        stacki<T> * todel=this->top;
        this->top=this->top->next;
        delete todel;
    }
 }
 T peek(){
    if(this->top==nullptr){
        throw runtime_error("empty");
    }
    return this->top->data;

 }
 bool isempty(){
    if(top==nullptr)
    return true;
    return false;
 }


};
int main() {
    mystack<int> s1;
    try{
        s1.peek();
    }
    catch(std::runtime_error &e){
        cout<<e.what();
    }

    
    return 0;
} 

//correct it by error handling and other issue;