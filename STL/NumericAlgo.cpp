#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
int main(){

    vector<int>v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    vector<int>v1;

    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);

    // int sum=accumulate(v.begin(),v.end(),0);

    // cout<<sum;

    // int val=inner_product(v.begin(),v.end(),v1.begin(),0);
    // cout<<"the inner product is:- "<<val;
    vector<int>result(v.size());
    partial_sum(v.begin(),v.end(),result.begin());

    for(int a:result){
        cout<<a<<" ";
    }

    vector<int>abc(5);

    iota(abc.begin(),abc.end(),99);

    for(int a: abc){
        cout<<a<<" ";
    }

    return 0;
}