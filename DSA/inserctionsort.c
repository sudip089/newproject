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
    for (i = 1; i <= n - 1; i++)
    {
        temp = a[i];
        j = i;

        while (a[j - 1] > temp && j >= 1)
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = temp;
    }

    printf("Now the sorted array is  ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}