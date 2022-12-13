#include<iostream>
using namespace std;

class A{
    int a;
    public:
    // A  setdata(int a){
    void setdata(int a){
        this->a=a;
        // return *this;
    }
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
    }
    // A& deldata(int a){
    //     this->a=a;
    //     return *this;
    // }
};

int main(){
    //this is a keyboard which is a pointer which points to the object which invokes the member function
    A a;
    a.setdata(54); //.getdata();
    a.getdata();
    return 0;
}