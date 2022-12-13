#include <iostream>
using namespace std;
/*

Initialization list: It is used to diretly intilize data memebers of a class . It starts after constructor
Syntax for initialization list in constructor:
constructor(argument-list):initialization-secton{
    assignment+other code;
}

class test{
    int a;
    int b;
    public:
        test(int i ,int j):a(i),b(j){
            contructor-body
        }
}

*/
class test{
    int a;
    int b;
    public:
        // test(int i,int j):a(i),b(j){

        //     cout<<"The value of a is "<<a<<" and value of b is "<<b<<endl;
        //     cout<<"This methods runs successfully"<<endl;
        // }

        // test(int i,int j):a(i),b(i+j){
        //     cout<<"The value of a is "<<a<<" and value of b is "<<b<<endl;
        //     cout<<"The method 2 runs successfully "<<endl;

        // }

        // test(int i,int j):a(i),b(a+j){
        //     cout<<"The value of a is "<<a<<" and value of b is "<<b<<endl;
        //     cout<<"The method 2 runs successfully "<<endl;

        // }

        // test(int i,int j):b(j),a(b+i) //--> Red flag may create problem because a will be initialized first
        // { 
        //     cout<<"The value of a is "<<a<<" and value of b is "<<b<<endl;
        //     cout<<"The method 2 runs successfully "<<endl;

        // }

        test(int i,int j)
        {   a=i;
            b=j;
            cout<<"The value of a is "<<a<<" and value of b is "<<b<<endl;
            cout<<"The method 2 runs successfully "<<endl;

        }

};
int main(){

    test t1(5,6);
    
    return 0;
}