#include<iostream>
#include<list>
using namespace std;
int n=1;

void setvalue(list<int> &list6){
    int a,s;
    cout<<"Enter the size of the list "<<endl;
    cin>>s;

    
    for(int i=0;i<s;i++){
        cout<<"Enter the "<<i+1<< "number of the list :"<<endl;
        cin>>a;
        list6.push_back(a);



    }

}
void display(list<int> &list7){

    list<int>::iterator iter;
    iter = list7.begin();
    // cout<<*iter<<endl;
    // iter++;
    // cout<<*iter<<endl;
    for(int i=0;i<list7.size();i++){
        cout<<i+1<<"number of the list "<<n<< " is "<<*iter<<endl;
        iter++;
        
    }
    n++;
    cout<<endl;
}



int main(){
    int a,s;
    
    list<int>list1;//list with zero element
    list<int> list2(7);//empty lis of size of 7
    
    // list1.push_back(5);
    // list1.push_back(4);
    // list1.push_back(3);

    // cout<<"Enter the size of the list "<<endl;
    // cin>>s;

    // for(int i=0;i<s;i++){
    //     cout<<"Enter the "<<i+1<< "number of the list :"<<endl;
    //     cin>>a;
    //     list1.push_back(a);



    // }
    setvalue(list1);
    
    list<int>::iterator iter;
    iter=list2.begin();
    *iter=5;
    iter++;
    *iter=6;
    iter++;
    *iter=6;
    iter++;
    *iter=5;
    iter++;
    *iter=6;
    iter++;
    *iter=6;
    iter++;
    *iter=5;
   



    //giving output of the list
    // list<int>::iterator iter;
    // iter = list1.begin();
    // // cout<<*iter<<endl;
    // // iter++;
    // // cout<<*iter<<endl;
    // for(int i=0;i<list1.size();i++){
    //     cout<<i+1<<"number of the list is "<<*iter<<endl;
    //     iter++;
    // }

    /*
    removing element from the list
    list1.pop_front();
    list1.pop_back();
    list1.remove(9);
    */
    display(list1);
    // list1.sort(); //sorting a list
    list1.merge(list2);//merging of lists
    display(list1);
    // display(list2);
    return 0;
}