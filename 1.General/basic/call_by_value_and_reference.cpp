#include<iostream>
using namespace std;

void swap(int a,int b){ //this will not swap the value of x and y
    int temp=a;
    a=b;
    b=temp;

}
void swapointer(int* a,int* b){ //this will  swap the value of x and y
    int temp=*a;
    *a=*b;
    *b=temp;

}
void swapreferencevar(int &a,int &b){ //this will  swap the value of x and y using refernce variable
    int temp=a;
    a=b;
    b=temp;

}
int main(){
    int x=5,y=10;
    cout<<"the value of 'x' before swaping is :"<< x<<", and the value of 'y' before swaping:   "<<y<<endl; 
    // swap(x,y);//this will not swap the value of x and y
    // swapointer(&x,&y);//this will  swap the value of x and y
    swapreferencevar(x,y); // here a and b will change , and here we have used refernce variable
    cout<<"the value of 'x' after swaping is :"<< x<<", and the value of 'y' after swaping:   "<<y<<endl; 
    return 0;
}