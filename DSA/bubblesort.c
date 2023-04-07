#include<stdio.h>
int main(){
    int a[10],i,n,j;
    printf("Enter the length of array ");
    scanf("%d",&n);
    printf("Emter  the element of array ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("After the bubble sort ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}