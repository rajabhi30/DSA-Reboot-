#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<string>str={"sam","ram","kann"};

    vector<string>::iterator it;

    for(it=str.begin(); it!=str.end(); it++){
        cout<<*(it)<<" ";
    }

    // 5 types of iterator
    
    // -input 
    // -output
    // -forword
    // -bi-directional
    // -random accesss

    return 0;

}