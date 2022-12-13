#include<iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void get_roll_number(void);
        void set_roll_number(int);
};

void student::set_roll_number(int n){
    roll_no=n;
}
void student :: get_roll_number(){
    cout<<"The roll number of the student is :"<<roll_no<<endl;
}

class exam:public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void exam:: set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
    
}
void exam:: get_marks(){
    cout<<"The marks obtained in maths are :"<<maths<<endl;
    cout<<"The marks obtained in physics are :"<<physics<<endl;

}

class result : public exam{
    float percentage;
    public:
        void display(void){
            get_roll_number();
            get_marks();
            cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
        }


};

int main(){
    /*
    Notes:
        If we are inheriting B from A and C from B:[A-->B-->c]
        1. A is the base class for B and B is the base class for c
        2. A-->B-->C is called Inheritance path
    */
    result lokesh;
    lokesh.set_roll_number(8);
    lokesh.set_marks(90,98);
    lokesh.display();
    return 0;
}