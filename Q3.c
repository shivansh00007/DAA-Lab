//largest element
#include <stdio.h>

int main()
{
    int arr[100],i,n,largest;

    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    printf("Enter Elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    largest=arr[0];

    for (i=1;i<n;i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
    }

    printf("Largest element is: %d",largest);

    return 0;
}