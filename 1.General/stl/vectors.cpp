#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int>vec1;//zero lenght vector
    vector<char>vec2;//2 lenght vector in char
    int size,n;
    cout<<"Enter the size of the vector :"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the "<<i+1<<" element"<<endl;
        cin>>n;
        vec1.push_back(n);
    }
    // vec1.pop_back();
    display(vec1);
    vector<int>::iterator iter=vec1.begin();
    vec1.insert(iter+1,5,50);
    display(vec1);
    return 1;

} 