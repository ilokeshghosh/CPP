#include<iostream>
using namespace std;

int fact(int n){
     int f;
    if(n==0|| n==1){
        return 1;
    }
    else{
        return (n*fact(n-1));
        
    }
}
void for_sum(){
    int i,sign=1;
    float s=0;
    for(i=0;i<5;i++){
        s=s+((sign)*i/fact(i));
        sign=sign--;
    }
    cout<<s;
}
int main(){
for_sum();
 return 0;
}