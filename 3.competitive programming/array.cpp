#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin>>N;
    int A[N];
    
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    
    // A[0]=A[N];
    // A[1]=A[N-1];
    
    // for(int k=0;k<N;k++){
    //     cout<<A[k];
    // }

     for(int j=N-1;j<N && j>=0;j--){
        cout<<A[j]<<" ";
    }
    // return 0;
}
