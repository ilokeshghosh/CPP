#include<iostream>
#include<math.h>
using namespace std;
int py(int a, int b, int c){

    if(pow(a,2)+pow(b,2)==pow(c,2)){
        cout<<"The given number is pythogerous triplet :"<<endl;

    }
    else{
        cout<<"The given number is not pythoderous triplet :"<<endl;
    }
    return 0;
}
int main(){
    int a,b,c;
    cout<<"Enter the 3 number :"<<endl;
    cin>>a>>b>>c;

 return 0;
}