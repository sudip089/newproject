#include<stdio.h>
int main(){
    int a[50],i,s,num,pos;
    printf("Enter the size of array");
    scanf("%d",&s);
    printf("Enter elements of array ");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter data u want to insert");
    scanf("%d",&num);
    printf("enter position");
    scanf("%d",&pos);
    for(i=s-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    s++;
    printf("The array is now");
    for(i=0;i<s;i++){
        printf("%d",a[i]);
    }
}