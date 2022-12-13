#include<iostream>
using namespace std;

class base{
    int a;
    public:
    base(void){
     cout<<"hi"<<endl;
    }
    void display(){
    cout<<"This is base class"<<endl;
    }

};
class derived : public base{
    int b;
    public:
    void display(){
        cout<<"This is derived class"<<endl;
    }
};
int main(){
    derived d;
    base b;
    b.
    

    d.display();
 return 0;
}