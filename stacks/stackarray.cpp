#include<bits/stdc++.h>
using namespace std;
class mystack{
    public:
    int *arr;
    int top;
    int capacity;
    mystack(int cap){
        this->capacity=cap;
        this->top=-1;
        this->arr=new int[cap];
    }
    int peek(){
        if(this->top<0){
        cout<<"underflow";
        return -1;
        }
        return this->arr[this->top];
    }
    void push(int val){
       
        if(top>capacity-1){
        cout<<"overflow";
        return ;
        }
         this->top++;
        this->arr[this->top]=val;
        

    }
    void pop(){
        if(top<0){
        cout<<"underflow already";
        return ;
        }

        this->top--;
        

    }
    bool isfull(){
        if(top>=capacity-1)
        return true;
        else
        return false;
    }
    bool isempty(){
        if(top==-1)
        return true;
        else
        return false;
    }

};
int main() {
    mystack s1(5);
    cout<<s1.peek()<<endl;
    s1.push(2);
    s1.push(5);
    cout<<s1.peek();
    
    return 0;
}