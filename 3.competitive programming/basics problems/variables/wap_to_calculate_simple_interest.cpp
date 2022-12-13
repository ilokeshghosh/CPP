#include<iostream>
using namespace std;
int main(){
    float p,t,r,i;
    cout<<"The the principle amount :"<<endl;
    cin>>p;
    cout<<"Enter the time in year "<<endl;
    cin>>t;
    cout<<"Enter the rate of interest"<<endl;
    cin>>r;

    i=(p*t*r)/100;
    cout<<"Total in interest of "<<p<<"amount for "<<t<<" year at "<<r<<"interest rate is :"<<i<<endl;
}