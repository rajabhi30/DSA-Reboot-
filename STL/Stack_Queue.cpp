#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your main logic goes here

    stack<int>st;

    st.push(10); // rear
    st.push(11);
    st.pop(); // rear


    st.size();
    st.top();

    if(st.size()==0){
        cout<<"stack is empty";
    }
    else{
        cout<<"stack is not empty";
    }


    queue<int>q;

    q.push(100); // rear
    q.push(110);

    q.pop(); // front


    q.front();
    q.back();

     if(q.size()==0){
        cout<<"queue is empty";
    }
    else{
        cout<<"queue is not empty";
    }
    
    return 0;
}