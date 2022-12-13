#include <iostream>
using namespace std;
void update(int *a,int *b) {
    //  a= *(a) + *(b) ;
    int temp=*a;
    *a=*a+*b;

    *b=temp-*b;
     
     
      /*
      a=pa; and pa=&a
      so a=&a;





      */
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    // cout<<pb<<endl;
    update(pa, pb);
    printf("%d\n%d", a, abs(b));
  

    return 0;
}
