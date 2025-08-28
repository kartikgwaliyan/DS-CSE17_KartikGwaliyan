#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    int temp[max];
    for (int i = 0; i <= max; i++)
    {
        temp[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        temp[arr[i]]++;
    }

    for (int i = 0; i <= max; i++)
    {
        if (temp[i] != 0)
        {
            printf("%d occurs %d times in array.\n", i, temp[i]);
        }
    }
    return 0;
}