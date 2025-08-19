#include<bits/stdc++.h>

int main() {
    std::string name;
    name="devansh is my name";
    std::cout<<name[200]<<name.size();
    std::getline(std::cin,name); //getline overwrites the string
    std::cout<<name;

    return 0;
}