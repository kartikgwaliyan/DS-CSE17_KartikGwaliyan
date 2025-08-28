#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of elements in the array: ");
    scanf("%d", &n);

    int arr[n], position, value;

    // taking elements of array from the user
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array before insertion: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter position and the value of element which has to be insert: ");
    scanf("%d%d", &position, &value);

    // shift elements
    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;

    printf("Array after insertion: \n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}