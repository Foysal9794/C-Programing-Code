#include<stdio.h>
int main()

{
    int limit,num,first_learg=0,second_learg=0;
    printf("Enter your limit: ");
    scanf("%d",&limit);
    printf("Enter %d number: ",limit);
    while(limit>0)
    {
        scanf("%d",&num);
        if(num>first_learg)
        {
            second_learg=first_learg;
            first_learg=num;
        }
        else if(num>second_learg)
        {
            second_learg=num;
        }
        limit--;
    }
    printf(" First Learg is : %d\n",first_learg);
    printf(" seceond Learg is : %d",second_learg);

    return 0;
}
