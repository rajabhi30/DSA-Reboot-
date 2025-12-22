#include <bits/stdc++.h>
using namespace std;

int main() {

    // priority_queue<int>pq; // this is max heap


    // pq.push(10);
    // pq.push(99);
    // pq.push(-1);
    // pq.push(95);

    // cout<<pq.top();
    // pq.pop();
    // cout<<pq.top();


    priority_queue<int,vector<int>,greater<int>>pq;

    pq.push(100);
    pq.push(-1);
    pq.push(0);

    cout<<pq.top();

    
    return 0;
}