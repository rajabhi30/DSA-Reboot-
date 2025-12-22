#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your main logic goes here
    list<int>lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    
    lt.push_front(9);
    lt.push_front(8);
    lt.push_front(7);

    list<int>::iterator it=lt.begin();

    while(it!=lt.end()){
        cout<<*(it)<<" "<<endl;
        it++;
    }

    cout<<"size of list is:- "<<lt.size();

    lt.remove(10);

    cout<<"size of list after removal is:- "<<lt.size();

    // insert is also there
    

    return 0;
}