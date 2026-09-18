//binary sort
#include <stdio.h>
#include <time.h>

int main()
{
    int a[100],n,key,low,high,mid,i;
    clock_t start,end;

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter sorted elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter key:");
    scanf("%d",&key);

    start=clock();

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==key)
            break;
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }

    end=clock();

    if(low<=high)
        printf("Found at position %d\n",mid + 1);
    else
        printf("Not found\n");

    printf("Time=%f seconds\n",
           (double)(end-start)/CLOCKS_PER_SEC);

    return 0;
}