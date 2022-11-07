#include<stdio.h>

int main()

{
    int num[100],limit,i;
    printf("Enter your Limit : ");
    scanf("%d",&limit);

    for(i=0; i<limit; i++)
    {
        scanf("%d",&num[i]);
    }
    int large = num[0];
    int small = num[0];
    for(i=1; i<limit; i++)
    {
        if(large<num[i])
            large = num[i];
    }
    printf("large number is : %d \n",large);

    for(i=1; i<limit; i++)
    {
        if(small>num[i])
            small = num[i];
    }
    printf("small number is : %d",small);




}
