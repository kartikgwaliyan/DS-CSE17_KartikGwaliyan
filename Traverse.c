#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // taking elements of array from the user
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}