#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // // **********CONSTANT*******
    // const float pi=3.14;
    // cout<<"The value of pi is :"<<pi<<endl; 
    // pi=3.149; // constant variable cannot be change so you will get an error
    // cout<<"The value of pi is :"<<pi<<endl;
    // return 0;

    // **********MANIPULATOR*******
    int a=6, b=3,c=5;
    cout<<"The value of a without setw is :"<<a<<endl;
    cout<<"The value of b without setw is :"<<b<<endl;
    cout<<"The value of c without setw is :"<<c<<endl<<endl;


    cout<<"The value of a with setw is :"<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is :"<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is :"<<setw(4)<<c<<endl;

    //cppreference.com 
}