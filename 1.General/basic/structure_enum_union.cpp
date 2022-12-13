#include<iostream>
using namespace std;

struct employee{
    int eid;
    char favchar;
    float salary;
    
};
typedef struct college{
    int roll;
    char dept;
    float cg;
    
}co;
int main(){


    
    // struct employee lokesh;
    // lokesh.eid=1;
    // lokesh.favchar='o';
    // lokesh.salary=9999.9;
    // cout<<"The vlaue of lokesh eid is "<<lokesh.eid<<endl;
    // cout<<"The value of lokesh favchar is "<<lokesh.favchar<<endl;
    // cout<<"The value of lokesh slary is "<<lokesh.salary<<endl<<endl;
    
    // //this is using type def , it is use to make easier to call a structure like 'college' to 'co'
    // cout<<"Using type def"<<endl;
    // co rahul;
    // rahul.roll=1;
    // rahul.dept='b';
    // rahul.cg=9.99;
    // cout<<"Roll of rahul in college is :"<<rahul.roll<<endl;
    // cout<<"dept of rahul in college is :"<<rahul.dept<<endl;
    // cout<<"cgpa of rahul in college is :"<<rahul.cg<<endl;

    //Enum 
    enum meal{breakfast,lunch,dinner};
    meal m1=breakfast;
    meal m2=lunch;
    meal m3=dinner;
    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;
    cout<<(m3==3)<<endl;

 return 0;
} 