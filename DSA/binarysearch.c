#include <stdio.h>
int binaryserch()
{
    int a[10], i, j, n, b;
    printf("Enter the array limit");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    printf("now the assending order is  ");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
     }
    printf("\n");
    int data;
    printf("Enter value\n");
    scanf("%d", &data);
    int low = 0;
    int high = n - 1;
    printf("Enter value %d\n", high);
    int mid = 0;
    while (low <= high)
    {
        // printf("Enter value\n");
        mid = (low + high) / 2;
        if (a[mid] == data)
        {
            return mid;
        }
        else if (a[mid] < data)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // printf("%d\n",mid);
    return -1;
}

int main()
{
    int var = binaryserch();
    if (var == -1)
    {
        printf("Data not found");
    }
    else
        printf("data found at %d pos", var);
}