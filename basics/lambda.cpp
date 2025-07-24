#include<bits/stdc++.h>

int main() {
    int a=10;
    int b=5;
    auto lamb=[a,b](){  //for all variables in scope,use "=" or "&"(for reference)
        return a+b;
    };
    std::cout<<lamb();
    return 0;
}
//it captures values only inside scope where lambda is been defined