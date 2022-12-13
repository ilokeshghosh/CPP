#include <iostream>
using namespace std;

class number{
    int a;
    int b;
    public:
        number(){
            a=5;
        }
        number(int num){
            a=num;
        }
        number(int num,int n){
            a=num;
            b=n;
        }
        //When no copy constructor is found,compiler supplies its own copy constructor
        number(number &obj){
            a= obj.a;
            cout<<"The copy construtor is called "<<endl;
        }
        void display(){
            cout<<"The entered value is :"<<a<<"and"<<b<<endl<<endl;
        }
};
int main(){

    number x,y(9,11),z(10),z2;


    x.display();

    y.display();

    z.display();
//z1 should exactly resemble z or x or y 
    number p(y);
    p.display();

    z2=y;   //copy constructor not called
    z2.display();

    number l=z;
    l.display();    
    
}