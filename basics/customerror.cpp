#include<iostream>
using namespace std;
class customerror:public std::exception{
    const char* message;
    public:
    const char* what() const noexcept override{
        return message;
    }
    customerror(const char* a){
        this->message=a; //I have used string literals here thats why it is correct,
                          //otherise i cant return normal char arrays or other arrays unlike
                          //static as they destroyed after fn ends.

    }

};

int main() {
    int n;
    cout<<"enter nmber from 0-9 : ";
    cin>>n;
    try{
    if(n>=10){
        throw customerror("my custom error");
    }
    else{
        cout<<"right choice";
    }
}
catch(std::exception &e){
    cout<<e.what();
}
    return 0;
}