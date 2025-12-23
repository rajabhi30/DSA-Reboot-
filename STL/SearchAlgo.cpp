#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int>v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    bool ans=binary_search(v.begin(),v.end(),30);
    cout<<"does the arrya has 30 "<<ans;

    auto it=lower_bound(v.begin(),v.end(),35);
    cout<<"lower bound of 35 is "<<*(it);

    auto it1=upper_bound(v.begin(),v.end(),20);
    cout<<"upper bound of 20 is "<<*(it1);

    // min/max algo

    int a=276;
    int b=291;

    cout<<"the max element between A and B is "<<max(a,b);
    cout<<"the min element between A and B is "<<min(a,b);


    vector<int>vtr;

    vtr.push_back(77);
    vtr.push_back(89);
    vtr.push_back(37);
    vtr.push_back(99);
    vtr.push_back(57);
    vtr.push_back(84);


    auto mx=max_element(vtr.begin(),vtr.end());

    cout<<"the max amoung the range is "<<*(mx);

    auto mi=min_element(vtr.begin(),vtr.end());

    cout<<"the min amoung the range is:- "<<*(mi);

    return 0;
}