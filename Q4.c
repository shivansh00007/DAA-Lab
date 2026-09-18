//avg of array
#include <stdio.h>

int main()
{
    int arr[100],i,n,sum = 0;
    float average;

    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    printf("Enter Elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    average=(float)sum/n;

    printf("Sum of elements=%d\n", sum);
    printf("Average=%.2f",average);

    return 0;
}