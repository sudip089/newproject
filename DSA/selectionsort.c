#include <stdio.h>
int main()
{
    int a[10], i, n, j, temp = 0;
    printf("Enter the length of array ");
    scanf("%d", &n);
    printf("Emter  the element of array ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
    printf("Now the sorted array is  ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

}