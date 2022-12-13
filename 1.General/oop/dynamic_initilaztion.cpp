#include <iostream>
using namespace std;

class bankdeposit{
    int amount;
    int year;
    float interestrate;
    float returnvalue;
    public:
        bankdeposit(){};
        bankdeposit(int a,int y,float I );
        bankdeposit(int a,int y,int i);
        void show();
};
bankdeposit :: bankdeposit(int a,int y,float I){

            amount=a;
            year=y;
            interestrate=I;
            returnvalue=amount;
            for(int i=0;i<y;i++){
                
                returnvalue=returnvalue*(1+interestrate);
            }
            

}
bankdeposit :: bankdeposit(int a,int y,int i){
    amount =a;
    year=y;
    interestrate  = float(i)/100;
    returnvalue=amount;
    for (int  i = 0; i < y; i++)
    {
        returnvalue=returnvalue *(1+interestrate);
    }
    
}
void bankdeposit::show(){

    cout<<"The amount :"<<amount<<endl<<"The time :"<<year<<endl<<"The interestrate :"<<interestrate<<endl<<"The total amount of the given time :"<<returnvalue<<endl;
}

int main(){
    bankdeposit b1,b2;
    int a,b,i;
    float I;
    cout<<"The values of a,b,I"<<endl;
    cin>>a>>b>>I;
    b1=bankdeposit(a,b,I);
    b1.show();

    cout<<"The values of a,b,i"<<endl;
    cin>>a>>b>>i;
    b2=bankdeposit(a,b,i);
    b2.show();

   
    return 0;


}