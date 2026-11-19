#include <stdio.h>
int main()
{
    int n,i,j;
    int freq[20];
    printf("Enter number of characters:");
    scanf("%d",&n);
    printf("Enter frequencies:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&freq[i]);
    }
    while(n>1)
    {
        // Sort frequencies
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(freq[i]>freq[j])
                {
                    int temp=freq[i];
                    freq[i]=freq[j];
                    freq[j]=temp;
                }
            }
        }
        // Combine two minimum frequencies  
        int sum=freq[0]+freq[1];
        printf("%d+%d = %d\n",freq[0],freq[1],sum);
        // Remove first two and add their sum
        for(i=2;i<n;i++)
        {
            freq[i-2]=freq[i];
        }
        freq[n-2]=sum;
        n--;
    }
    return 0;
}