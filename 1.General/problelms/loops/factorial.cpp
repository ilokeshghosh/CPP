#include <iostream>
using namespace std;
int func(int n){

    if(n==1 || n==0){
        return 1;
    }
    else{
        return n*(func(n-1));
    }
}
int main(){
    int num;
    cout<<"Enter the number you want factorial of :"<<endl;
    cin>>num;
    cout<<"The factorial of the given number is :"<<func(num);
}