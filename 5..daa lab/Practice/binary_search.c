#include <stdio.h>
int search(int a[],int n,int x){
    int mid=a[0]+(n-1)*a[n-1]; //from the ap formula

    for(int i=0;i<n;i++){
        if (mid==x)
        {
            return i;
        }
        else if (mid<x)
        {
            return search(a,mid+1,x);
        }
        else if (mid>x)
        {
            return search(a,mid-1,x);
        }
        
        
        
    }
}
int main()
{
   int ar[]={5,6,7,8,9,11,3,15};
 
   int x,n;
    n=sizeof(ar)/sizeof(ar[0]);
    printf("Enter the number you want to find : \n");
    scanf("%d",&x);

    printf("The position of the searched number is %d :",search(ar,n,x));




}