#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int marks;
    student(string str,int marks){
        this->marks=marks;
        this->name=str;
    }
};

class cmp{
    public:
    bool operator()(student s1,student s2){
        return s1.marks>s2.marks;
    }
};
int main(){

    student s1("Abhishek",99);
    student s2("aanchal",89);

    cmp c;
    if(c(s1,s2)){
        cout<<"Abhishek get more marks"<<endl;
    }
    else{
        cout<<"aanchal gets more marks"<<endl;
    }

    return 0;
}