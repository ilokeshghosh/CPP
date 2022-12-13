#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=10;
    int temp;

    cout<<"Before swaping a="<<a<<" and b="<<b<<endl;
    //swaping
            // temp a   b
    temp=a; /*  5   5   10 */
    a=b;     /* 5   10  10 */
    b=temp;  /* 5   10  5   */             
    cout<<"After swaping a="<<a<<" and b= "<<b;
}