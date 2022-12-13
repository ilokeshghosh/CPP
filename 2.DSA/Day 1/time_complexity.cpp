#include<iostream>
using namespace std;
int main(){
    int n;
    int num;
    cout<<"Enter the size of the array :"<<endl;
    cin>>n;
    int a[n];
   
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<< "number item of the array"<<endl;
        cin>>a[i];

    }

    cout<<"Enter the number you want to find :"<<endl;
    cin>>num;

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"The value of "<<i<<" number item of the array is "<<a[i]<<endl;
    // }

    for(int i=0;i<num;i++){
        if(a[i]==num){
            cout<<i<<" is the position where"<<num<<" found "<<endl;
        }
    }
    
 return 0;
}