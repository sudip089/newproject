#include<stdio.h>
int main(){
     int a[50], i,j,s,pos;
     printf("Enter the size of array ");
     scanf("%d",&s);
     printf("Enter the array element ");
     for(i=0;i<s;i++)
     {
        scanf("%d",&a[i]);
     }
     printf("Enter the position which u want to del");
     scanf("%d",&pos);
     for(i=(pos-1);i<s;i++){
        a[i]=a[i+1];
     }
     s--;
     printf("the new array is");
     for(i=0;i<s;i++){
        printf("%d",a[i]);
     }
     }