#include <bits/stdc++.h>

int main() {
    std::multimap<std::string, std::string> mymap;
    mymap.insert({"hello", "coders"});
    mymap.insert({"hello", "gandu"});

    auto i = mymap.find("hello");
    std::cout << i->second << std::endl;

    std::cout << mymap.count("hello") << std::endl;

    mymap.insert({"hi", "babes"});
    mymap.insert({"hi", "gandu"});

    auto it = mymap.equal_range("hi");
    for (auto itr = it.first; itr != it.second; ++itr) {
        std::cout << itr->first << " => " << itr->second << '\n';
    }

    return 0;
}
