#include<iostream>
using namespace std;
/*
Virtual Base Class: It is used to avoid the redefination of the member varibale ,class
by a subclass of an outer class.
*/
class student{
    protected:
        int roll_no;
    public:
    void set_number(int a){
        roll_no=a;
    }
    void print_number(void){
        cout<<"your roll no"<<roll_no<<endl;
    }

};

class test: virtual public student{

    
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;

    }
    void print_marks(void){
        cout<<"You result is here"<<maths<<"and"<<physics<<endl;
    }
};
// class sports: public virtual student is also correct
class sports:virtual public student{
   protected:
        float score;
        public:
        void set_score(float sc){
            score=sc;
        }
        void print_score(void){
            cout<<"Your pt score is "<<score<<endl;
        }
};

class result :public test, public sports{
    
    float total;
    public:
        void display(void){
            total=maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"your total a score is:"<<total<<endl;
        }
};
int main(){
    cout<<"hi"<<endl;
    result harry;
    harry.set_number(4200);
    harry.set_marks(78.9, 99.5);
    harry.set_score(9);
    harry.display();
    return 0;
}