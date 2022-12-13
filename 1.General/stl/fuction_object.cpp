#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
    int a;
    //Function object(functor):fuction wrapped in a class so that it available like a object 
    int arr[]={99,54,321,44,2};
    sort(arr,arr+3,greater<int>());
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
 return 0;
}