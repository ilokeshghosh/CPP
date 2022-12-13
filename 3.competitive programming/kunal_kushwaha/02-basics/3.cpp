// Write a program to input principal, time, and rate (P, T, R) from the user and find Simple Interest.

#include<iostream>
using namespace std;
int main(){
    float p,t,r,a;
    cout<<"Enter the amount :"<<endl;
    cin>>p;
    cout<<"Enter the time(in year) :"<<endl;
    cin>>t;
    cout<<"Enter the rate of interest :"<<endl;
    cin>>r;
    
    a=(p*t*r)/100;
    cout<<"The total amount after tenure time is : "<<a<<endl;
    
    
 return 0;
}