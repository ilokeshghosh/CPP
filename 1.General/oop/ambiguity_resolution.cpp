#include<iostream>
using namespace std;
class base1{
    public:
    // int a=5;
        void greet(){
            cout<<"HI"<<endl;

        }
};
class base2{
    public:
    // int a=10;
        void greet(){
            cout<<"HELLO"<<endl;
        }
};

class derived : public base1 ,public base2{
    
    public: 
    void greet(){
        // base2::greet();
    }
        
};
class b{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};
class d: public b{
    int a=8;
    //d's new say() method will override base class's say() method
    public:
        void say(){
            cout<<"HI"<<endl;
        }
};
int main(){
    // //Ambiguity 1
    // derived d;
    // // cout<<d.a<<endl;
    // d.greet();

    //Ambiguity 2
    b b1;
    b1.say();

    d c;
    c.say();
// 
}