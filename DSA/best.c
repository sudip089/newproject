#include<stdio.h>
void main(){
    int a[50],i,j,k,n,count;
    printf("How many num you want to write ");
    scanf("%d",&n);
    printf("Enter the num ");
    for(i=0;i<n;i++){
        scanf("%d",a[i]);
    }
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
         if(a[i]==a[j]){
            count++;
         }
        }
    }
   for(i=0;i<n;i++){
    printf("%d occurs %d times ",a[i],count);
   }
}