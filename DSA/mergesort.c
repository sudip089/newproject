#include <stdio.h>
void marge(int a[], int temp[], int left, int mid,int right)
{
    int i, leftend, size, temppos;
    leftend = mid - 1;
    temppos = left;
    size = right - left + 1;
    while ((left <= leftend) && (mid <= right))
    {
        if (a[left] <= a[mid])
        {
            temp[temppos] = a[left];
            temppos = temppos + 1;
            left = left + 1;
        }
        else
        {
            temp[temppos] = a[mid];
            temppos = temppos + 1;
            mid = mid + 1;
        }
    }
    while (left <= leftend)
    {
        temp[temppos] = a[left];
        left = left + 1;
        temppos = temppos + 1;
    }
    while (mid <= right)
    {
        temp[temppos] = a[mid];
        mid = mid + 1;
        temppos = temppos + 1;
    }
    for (i = 0; i <= size; i++)
    {
        a[right] = temp[right];
        right = right - 1;
    }
}
void margesort(int a[], int temp[], int left, int right)
{
    int mid;
    if (right > left)
    {

        mid = (right + left) / 2;
        margesort(a, temp, left, mid);
        margesort(a, temp, mid + 1, right);
        marge(a, temp, left, mid + 1, right);
    }
}
void printarray(int a[], int size)
{
    printf("Now the sorted array is  ");
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    
    int size;
    printf("Enter the sizeof array: \n");
    scanf("%d",&size);
    int a[size],temp[size];
    int i;                                                                                  
    printf("Enter the Element of array: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    margesort(a, temp, 0, size - 1);
    printarray(a, size);
}