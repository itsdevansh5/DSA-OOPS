#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
    string name;
    int model;
    string color;
    public:
    void get(){
        cin>>name;
        cin>>model;
        cin>>color;
    }
    void print(){
        cout<<name<<endl;
        cout<<model<<endl;
        cout<<color<<endl;
    }
};

int main() {
    Car c1;
    c1.get();
    c1.print();
    cout<<c1.color;

    return 0;
}