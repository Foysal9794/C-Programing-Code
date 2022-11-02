#include<stdio.h>
int main()
{
    int num,fact=1,i;
    printf("Enter your value: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        fact=fact*i;

       }
       printf("Number %d Factorial value is : %d ",num,fact);


}
