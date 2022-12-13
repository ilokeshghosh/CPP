#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    int m,s;
    string n;
    map<string,int> marksmap;
    // marksmap["lokesh"]=56;
    // marksmap["rahul"]=100;
    // marksmap["bipin"]=100;

    cout<<"Enter the number of student"<<endl;
    cin>>s;
    
    map<string,int>::iterator iter;
    // marksmap.insert({{"kuroo",100},{"kanlat",500}});

    for(int i=0;i<s;i++){
        cout<<"Enter the name and marks of student"<<endl;
        cin>>n>>m;
        marksmap.insert({n,m});
        // iter++;
    }
    for(iter=marksmap.begin();iter!=marksmap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;

    }

    
    return 0;

}