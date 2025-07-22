#include<iostream>
using namespace std;
class A{
    int *a;
    public:
    A(int t){
        this->a=&t;
    }
    void display(){
cout<<*a;
    }

};
int * input(int *g){
    return g;
    

}
int * hello(){
    int t=10;
    return &t;
}
int main() {
    int y=6;
    A a1(y);
    a1.display();
    int e=*(input(&y));
    cout<<e<<endl;
    cout<<*(hello());

    return 0;
}