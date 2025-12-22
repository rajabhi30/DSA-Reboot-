#include <bits/stdc++.h>
using namespace std;

int main() {

    // unordered_map<int,int>mp;

    // mp[1]=100;
    // mp[2]=200;
    // mp[3]=300;

    // unordered_map<int,int>::iterator it=mp.begin();

    // while(it!=mp.end()){
    //     pair<int,int> val=*it;
    //     cout<<val.first<<" "<<val.second<<endl;
    //     it++;
    // }
    // cout<<endl;
    // if(mp.find(2)!=mp.end()){
    //     cout<<"element is present";
    // }
    // else{
    //     cout<<"element is not present";
    // }

    map<int,int>mp;

    mp[1]=100;
    mp[2]=200;
    mp[3]=300;

    mp.insert(make_pair(4,400));

    pair<int,int>pr={5,500};
    mp.insert(pr);

    map<int,int>::iterator it=mp.begin();

    while(it!=mp.end()){
        pair<int,int> val=*it;
        cout<<val.first<<" "<<val.second<<endl;
        it++;
    }
    cout<<endl;
    if(mp.find(2)!=mp.end()){
        cout<<"element is present";
    }
    else{
        cout<<"element is not present";
    }

    return 0;
}