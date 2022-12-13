#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s="lokesh studies in makaut . makaut is iit of west bengal .";
    
    string st;
    ofstream out("test1.txt");//to write in file 
    out<<"I am "<<s; //<< or + while joining a string in this line;
     
    out.close();
    ifstream in("test1.txt");
    // in>>st;
    getline(in,st);
    cout<<"The written data in the file is "<<st;
    in.close();
    return 0;
}