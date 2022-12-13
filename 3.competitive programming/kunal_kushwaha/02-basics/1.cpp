// Write a program to print whether a number is even or odd, also take input from the user.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number :"<<endl;
    cin>>a;
    if(a%2==0){
        cout<<"The number is even :"<<endl;

    }
    else {
        cout<<"The number is odd "<<endl;
    }
    
 return 0;
}