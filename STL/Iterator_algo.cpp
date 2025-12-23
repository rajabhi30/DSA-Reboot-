#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void getdouble(int n){
    cout<<2*n<<" ";
}

bool geteven(int n){
    return n%2==0;
}

int main(){
    vector<int>arr(6);

    arr[0]=11;
    arr[1]=9;
    arr[2]=18;
    arr[3]=20;
    arr[4]=18;
    arr[5]=7;

    // for each
    for_each(arr.begin(),arr.end(),getdouble);

    //find, it return an iterator
    int target=20;
    auto it=find(arr.begin(),arr.end(),target);
    cout<<*(it);

    //find_if
    auto it1=find_if(arr.begin(),arr.end(),geteven);
    cout<<*(it1);

    // count
    int target1=18;
    int ans=count(arr.begin(),arr.end(),target1);
    cout<<"the 18 is present "<<ans<<" times"<<endl;

    // count_if
    int ans2=count_if(arr.begin(),arr.end(),geteven);
    cout<<"the even number present are:- "<<ans2;

    // sort(arr.begin(),arr.end());
    // reverse(arr.begin(),arr.end());
    cout<<endl;
    cout<<"before rotation"<<endl;
    for(int it:arr){
        cout<<(it)<<" ";
    }

   rotate(arr.begin(),arr.end()+2,arr.end());
   cout<<endl;
   cout<<"after rotation:"<<endl;

   for(int it:arr){
        cout<<(it)<<" ";
    }

    return 0;
}