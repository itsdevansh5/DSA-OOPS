#include<bits/stdc++.h>
using namespace std;
struct student{
    private:
    int roll;
    string name;
    public:
    void disp(){
        cout<<this->name;
    }
    void set(){
        this->name="devansh";
    }


};
int main() {
    student s1;
    s1.set();
    s1.disp();

    return 0;
}
//basically structs in cpp are same as class,only difference being the default access specifier