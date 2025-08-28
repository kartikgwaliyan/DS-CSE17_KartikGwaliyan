#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of elements in the array: ");
    scanf("%d", &n);

    int arr[n], position = -1, value;

    // taking elements of array from the user
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter value of element which has to be delete: ");
    scanf("%d", &value);

    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            position = i;
            break;
        }
    }

    if (position == -1)
    {
        printf("%d is not present in the given array", value);
    }
    else
    {
        for (int i = position; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        printf("Array after deletion: \n");
        for (int i = 0; i < n - 1; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}