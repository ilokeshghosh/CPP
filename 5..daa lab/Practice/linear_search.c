#include <stdio.h>
int search(int a[],int n,int x){

    for(int i=0;i<n;i++){
        if(a[i]==n){
            return i;
        }
    }
}
int main()
{
    int n,x;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int ar[n];

    for(int i=0;i<n;i++){
        printf("Enter the number at position %d in array :",i);
        scanf("%d",&ar[i]);
    } 
    printf("Enter the number you want to find in the array :");
    scanf("%d",&x);

    printf("The postion of the number %d is  %d",x,search(ar,n,x));


}