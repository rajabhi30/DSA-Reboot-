#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int>vtr;

    vtr.push_back(77);
    vtr.push_back(89);
    vtr.push_back(37);
    vtr.push_back(99);
    vtr.push_back(57);
    vtr.push_back(84);

    make_heap(vtr.begin(),vtr.end());

    for(int a:vtr){
        cout<<a<<" ";
    }

    vtr.push_back(101);

    push_heap(vtr.begin(),vtr.end());
    cout<<endl;
    cout<<"after insertion"<<endl;
    for(int a:vtr){
        cout<<a<<" ";
    }
    cout<<endl;

    pop_heap(vtr.begin(),vtr.end());
    vtr.pop_back();

    cout<<"after popping: -"<<endl;
     for(int a:vtr){
        cout<<a<<" ";
    }

    cout<<endl;
    cout<<"----------------------------------------------------------------------------------------"<<endl;

    vector<int>v1;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    vector<int>v2;

    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);

    vector<int>result;
    // set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),inserter(result,result.begin()));

    //  set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),inserter(result,result.begin()));

    //  set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),inserter(result,result.begin()));
    //  v1-v2

     set_symmetric_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),inserter(result,result.begin()));

    for(int it:result){
        cout<<(it)<<" ";
    }



}