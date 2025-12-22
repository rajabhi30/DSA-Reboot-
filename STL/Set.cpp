#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
    // set<int>st;
    unordered_set<int>st;

    st.insert(1);
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(4);
    st.insert(9);

    // set<int>::iterator it=st.begin();

    unordered_set<int>:: iterator it=st.begin();

    while(it!=st.end()){
        cout<<*(it)<<" ";
        it++;
    }

    if(st.find(10)!=st.end()){
        cout<<"element present";
    }else{
        cout<<"element not present";
    }
}