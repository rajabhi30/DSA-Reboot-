#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq;

    dq.push_back(10);
    dq.push_front(9);

    dq.pop_front();
    dq.pop_back();

    dq.size();

    deque<int>::iterator it=dq.begin();

    dq.erase(dq.begin(),dq.end());
    
    return 0;
}