#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
class abc{
    public:
    bool operator()(int a,int b){
        return a>b;
    }
};
int main(){
    abc cmp;
    vector<int>v={12,19,9,5,11};

    cout<<"this is before sorting:- "<<endl;

    for(int it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end(),cmp);

    cout<<"this is after sorting:- "<<endl;

     for(int it:v){
        cout<<it<<" ";
    }

    // max heap
    // priority_queue<int,vector<int>,less<int>>pq;

    // // min heap
    // priority_queue<int,vector<int>, greater<int>>pq;





    return 0;
}