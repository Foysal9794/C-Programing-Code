#include<stdio.h>

int main()

{
   int limit,number,sum=0,avg,i;
   printf("Enter limit : ");
   scanf("%d",&limit);
   printf("Enter number : ");
   for(i=1; i<=limit; i++)
   {
       scanf("%d",&number);
       sum = sum + number;
   }
   avg = sum / limit;
   printf("Everage is : %d",avg);




}
