#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;
    
    public:
        void setdata(void){
            cout<<"Enter the id :"<<endl;
            cin>>id;
            count++;
        }
        void getdata(void){
            cout<<"The id of this employee is "<<id<<" and this is the employee number"<<count<<endl;
        }
        static void getcount(void){
            cout<<"The value of count is "<<count<<endl;
        }
};
int employee :: count=100; //default value is zero

int main(){
    //static data members
    employee lokesh , rohan,lovish;
    lokesh.setdata();
    lokesh.getdata();
    employee::getcount();

    rohan.setdata();
    rohan.getdata();
    employee::getcount();

    lovish.setdata();
    lovish.getdata();
    employee::getcount();
}  