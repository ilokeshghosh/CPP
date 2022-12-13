#include<iostream>
using namespace std;
int main(){
    int n,n1,num;
    cout<<"Enter the 1st number :"<<endl;
    cin>>n;
    cout<<"Enter the 2nd number :"<<endl;
    cin>>n1;
    int d[n];
    for(int i=1;i<=n && i<=n1;i++){
        if(n%i==0 && n1%i==0){

         num=i;
        }
     
    }
    cout<<"The number is :"<<num;
    
  
    
 return 0;
}