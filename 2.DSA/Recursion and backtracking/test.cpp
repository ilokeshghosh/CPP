#include<iostream>
using namespace std;
int test(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    
    return 0;

}
int main(){
    int a=10,b=20;
    test(a,b);
    cout<<a<<endl<<b;
 return 0;
}