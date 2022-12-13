#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    cin>>b;
 
    string n[]={" ","one","two","three","four","five","six","seven","eight","nine"
        
    };
    for(int i=a;i<=b;i++){
     
     if(i<=9){
         cout<<n[i]<<endl;
     }
     else if(i%2==0 && i>9){
      cout<<"even"<<endl;   
     }
     else if(i%2!=0 && i>9) {
         cout<<"odd"<<endl;
     }
    }
    return 0;
}