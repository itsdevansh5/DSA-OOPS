#include<bits/stdc++.h>
using namespace std;
template <typename T>
class mystack{
deque<T>arr;
public:
void push(T d){
    arr.push_back(d);
}
void pop(){
    if(arr.size()==0)
    throw std::runtime_error("stack is empty");
    else
    arr.pop_back();
}
T peek(){
    if(arr.size()==0)
    throw std::runtime_error("stack is empty");
    else
    return arr.back();
}
};
int main() {
 

    
    return 0;
}