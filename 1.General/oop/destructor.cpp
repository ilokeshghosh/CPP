#include <iostream>
using namespace std;

//Destructor never takes an arguments nor does it return any values

int count=0;
class num{
    int a;
    public:
        num(){
            count++;
            cout<<"The is the time when constructor is called for object number : "<<count<<endl;

        }
        ~num(){

            cout<<"This is the time when my destructor id called for object number : "<<count<<endl;
            count--;

        }
};
int main(){
    cout<<"We are inside out main function"<<endl;
    cout<<"Creating first object n1"<<endl;

    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}
