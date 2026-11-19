#include <stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter number of activities: ");
    scanf("%d",&n);
    int start[n],finish[n];
    printf("Enter start and finish time of activities:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&start[i],&finish[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(finish[i]>finish[j])
            {
                temp=finish[i];
                finish[i]=finish[j];
                finish[j]=temp;

                temp=start[i];
                start[i]=start[j];
                start[j]=temp;
            }
        }
    }
    printf("Selected activities:\n");
    i=0;
    printf("(%d,%d)\n",start[i],finish[i]);
    for(j=1;j<n;j++)
    {
        if(start[j]>=finish[i])
        {
            printf("(%d,%d)\n",start[j],finish[j]);
            i=j;
        }
    }
    return 0;
}