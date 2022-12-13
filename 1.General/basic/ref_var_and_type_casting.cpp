#include<iostream>
using namespace std;
int a=20;
int main(){

    //*************build in datatypes************
    // int b,c,a;
    // cout<<"Enter the number :"<<endl;
    // cin>>b;
    // cout<<"Enter the 2nd number :"<<endl;
    // cin>>c;
    // a=c+b;
    // cout<<"Your sum is : "<<a<<endl;
    // cout<<"YOur another sum is : "<<::a<<endl; // '::' is called scope resolution operator

     
    //************* float,double,long double Literals ************
    // float e=3.14f;
    // long double f=3.14l;
    // cout<<"The value of 3.14 of is :"<<sizeof(3.14)<<endl; 
    // cout<<"The value of 3.14f of is :"<<sizeof(3.14f)<<endl;
    // cout<<"The value of 3.14F of is :"<<sizeof(3.14F)<<endl;
    // cout<<"The value of 3.14l of is :"<<sizeof(3.14l)<<endl;
    // cout<<"The value of 3.14L of is :"<<sizeof(3.14L)<<endl;
    // cout<<"The value of e is :"<<endl<<e<<endl<<"The value of f is :"<<endl<<f;


     
    // *************Reference Variable************
    float x=3.4;
    float &y=x;
    int i=5;
    int*p;
    p=&i;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<&i<<endl;
    cout<<*p<<endl;

    cout<<endl;

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<y<<endl;
    cout<<&y<<endl;
    cout<<endl;

    //*************Type casting************
    float l=3.14;
    cout<<"The value of l is :"<<int(l)<<endl;
    cout<<"The value of l is :"<<(int)l;

}