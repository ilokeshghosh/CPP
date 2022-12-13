#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;

    cout<<"Before swaping the two number :"<<a<<" "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swaping the two given number :"<<a<<" "<<b<<endl;
 return 0;
}