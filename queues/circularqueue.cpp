#include<bits/stdc++.h>
using namespace std;
class myqueue{
    int size;
    int *arr;
    int front;
    int rear;
    public:
    myqueue(int s){
        arr=new int[s];
        this->size=s;
        this->front=-1;
        this->rear=-1;
    }
    void enqueue(int v){
        if((this->rear+1)%this->size!=this->front){
            rear=(rear+1)%this->size;
            arr[rear]=v;
            if(front==-1)
            front=0;
        }
        else{
            throw std::runtime_error("full");
        }

    }
    void dequeue(){
        if(front==-1)
        throw std::runtime_error("empty");
        else if(front==rear){
front=rear=-1;
        }
        else{
            front=(front+1)%this->size;
        }
    }
    bool empty(){
        return (front==-1);
    }
    bool full(){
        return ((rear+1)%size==front);
    }

};
int main() {
    myqueue q(5);
    try{
        q.dequeue();
       
    }
    catch(std::runtime_error &e){
        cout<<e.what();
    }
    
    return 0;
}