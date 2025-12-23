#include<iostream>
using namespace std;
class functor1{
    public:
    bool operator()(int a,int b){
        return a>b;
    }
};
int main(){
    functor1 cmp;

    if(cmp(10,5)){
        cout<<"10 is greater than 5";
    }
    else{
        cout<<"5 is grater than 10";
    }
    return 0;
}