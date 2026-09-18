//ask elements and display
#include <stdio.h>

int main()
{
    int arr[100], i, n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter Elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}