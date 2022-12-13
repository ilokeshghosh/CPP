/*
Questions: Write a function that takes two inputs n and m and output the number of unique paths from the top left corner to bottom right corner of a nXm grid.
Constrainst: You can only move down or right 1 unit at a time.

*/

#include<iostream>
using namespace std;
int grid(int n,int m){

    if(n==1 || m==1){
        return 1;

    }
    return grid(n,m-1)+grid(n-1,m);

}
int main(){
    int n,m;
    cout<<"Enter the n value of the grid :"<<endl;
    cin>>n;
    cout<<"Enter the m value of the grid :"<<endl;
    cin>>m;
    cout<<"The number of unique paths from the top left corner to bottom right corner of nXm grid is :"<<grid(n,m);
}