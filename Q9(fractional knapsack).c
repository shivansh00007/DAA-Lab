#include <stdio.h>
struct item{
    int profit;
    int weight;
    float ratio;
};
int main(){
    int n;
    printf("Enter the number of iteams");
    scanf("%d",&n);

    struct item items[n];

    for(int i=0;i<n;i++){
        printf("Enter the profit and weight of item");
        scanf("%d %d", &items[i].profit,&items[i].weight);

        items[i].ratio=(float)items[i].profit/items[i].weight;
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(items[i].ratio < items[j].ratio){

                struct item temp;
                temp=items[i];
                items[i]=items[j];
                items[j]=temp;
            }
        }
    }
        int capacity;
        printf("enter the capacity of knapsack");
        scanf("%d",&capacity);
        float totalprofit =0;
        for(int i=0;i<n;i++){
            if(items[i].weight<=capacity){
                capacity=capacity-items[i].weight;
                totalprofit=totalprofit+items[i].profit;    
            }
            else
            {
             totalprofit=totalprofit+capacity*items[i].ratio;
             capacity=0;
             break;
            }
            printf("Maximum profit= %.2f\n",totalprofit);
        }
    


    return 0;
}