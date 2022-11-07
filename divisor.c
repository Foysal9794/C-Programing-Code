#include<stdio.h>

int main()

{
    int number, i ;
    printf("Enter any number : ");
    scanf("%d",&number);
    printf("%d Divisors is :\n", number);
    for(i=1; i<=number; i++)
    {
       if(number%i==0)
        printf("%d\n",i);
    }


}
