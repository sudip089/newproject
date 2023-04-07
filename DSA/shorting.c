#include<stdio.h>
void main(){
    int a[50],n,i,temp,j;
    printf("Enter the size of array");
    scanf("%d",&n);
printf("Enter the number ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++)

    if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
printf("after shorting");
for(i=0;i<n;i++){
    printf("%d",a[i]);
}
}