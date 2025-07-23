#include<bits/stdc++.h>

int main() {
    std::deque<int>my{1,2,3,4};
    std::cout<<my.at(0)<<std::endl;
    return 0;
}

//rest all is same as std::arrays but insertion and deletion at ends is efficient takes constant time unlike vectors