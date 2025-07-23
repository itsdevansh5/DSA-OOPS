#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main() {
     list<int>mylist{1,2,7,8,9};
     cout<<mylist.front()<<endl;
     cout<<mylist.back()<<endl;
     mylist.push_front(5);
     cout<<mylist.front();
     cout<<*(mylist.begin())<<endl;
     list<int>::iterator it;
     it=mylist.begin();
     advance(it,2);
     cout<<*(it)<<endl;
     //inerting single element by insert
     it=mylist.insert(it,10);
     cout<<*(it)<<endl;
     it--;
     cout<<*(it)<<endl;
     mylist.insert(it,4,9);
     it=mylist.end();
     cout<<*(it);
     it--;
     cout<<*(it);
    return 0;

}