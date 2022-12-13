#include <iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    int data3;
    public :
        simple(int a ,int b=5,int c=9){ 
            data1=a;
            data2=b;
            data3=c;   
        }
        void print();
};
void simple ::print(){
    cout<<"The  entered data ie. data1= "<<data1<<" and data2= "<<data2<<" and data3= "<<data3<<endl;

}
int main(){
    
    simple d(3),d2(2,11,60);
    
    d.print();
    d2.print();
}