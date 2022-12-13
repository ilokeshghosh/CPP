#include <iostream>
using namespace std;

class complex{
    int real,imaginary;
    public:
    void getdata(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;

    }
    void setdata(int a,int b){
        real=a;
        imaginary=b; 
    }
};
int main(){

    // complex c1;
    // c1.setdata(5,6);
    // c1.getdata();
    // complex *ptr;
    // ptr = new complex;

    /*
    use of new: It is used to allocate a memory dynamically and return the address of that memory to the pointer variable

        int a=5;
        int *ptr=&a;
        means
        int *ptr;
        ptr=&a;
        syntax of new operator:

            general syntax:
                    new data_type_of_memory_allocation;
            while using with pointer varibale :
                data_type_of_pointer_varible * name_of_pointer_variable = new data_type_of_memory_allocation; //here "*"" is used to state that it is a pointer varaiable not a normal variable

    */
    // (*ptr).setdata(1,6);is exactly same as
    // ptr->setdata(1,6);
    // (*ptr).getdata(); is as good as
    // ptr->getdata();


    //Array of objects
    complex *p =new complex[5];
    p->setdata(1,4);
    p->getdata();


    return 0;

 
}