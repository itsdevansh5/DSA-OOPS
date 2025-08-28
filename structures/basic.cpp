#include<bits/stdc++.h>
using namespace std;
typedef struct student{
    typedef int roll;
    roll r;
    string name;
    public:
    void disp(){
        cout<<this->name;
    }
    void set(){
        this->name="devansh";
    }


}s;
int main() {
    s s1;
    s1.set();
    s1.disp();
    s s2={564,"aryan"};


    return 0;
}
//basically structs in cpp are same as class,only difference being the default access specifier