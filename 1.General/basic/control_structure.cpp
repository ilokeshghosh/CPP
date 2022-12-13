#include<iostream>
using namespace std;
int main(){
    // //Selection control structure (if else statement)
    int a;
    cout<<"Enter your age :"<<endl;
    cin>>a;
    // if(a<18){
    //     cout<<"You can't vote "<<endl;

    // }
    // else if(a==18){
    //     cout<<"You have to wait "<<endl;

    // }
    // else{
    //     cout<<"You can vote "<<endl;
    // }

    //Selection control structure (switch-case statement)
    
    switch(a){
        case 10:
        cout<<"Your age is 10 "<<endl;
        break;
        case 18:
        cout<<"Your age is 18 "<<endl;
        break;
        default:
        cout<<"Your number is nither 10 nor 18 "<<endl<<endl;

        
    }
    cout<<"Your switch case statement ends here:";

    return 0;

}