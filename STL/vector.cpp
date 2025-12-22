#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v;

    // vector<int>v2(10)  this is with pre-define size

    vector<int>v3(10,-1); // size with a value
    cout<<"size of vector is:- "<<v3.size();
    v3.push_back(10);
    v3.push_back(-110);
    cout<<"size of vector is:- "<<v3.size();

    cout<<"capacity of vector is:- "<<v3.capacity();
    vector<int>::iterator it=v3.begin();

    while(it!=v3.end()){
        cout<<*(it)<<" ";
        it++;
    }

    // cout<<"Another way to do travsersing:- "<<endl;
    // for(int it:v3){
    //     cout<<it<<" ";
    // }

    v3.insert(v3.begin(),11111);
    // v3.clear(v3.begin(),v3.end());
    return 0;
}