#include<stdio.h>



int main()
{
    int first=0, second=1, fibo, n, counter=0 ;

    printf("Please Enter the Number to find Nth Fibonacci Number :  ");
    scanf("%d", &n);
    while(counter<n)
    {
        if(counter<=1)
        {
            fibo=counter;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }

        counter++;
    }
    printf("%d\n", fibo);
    return 0;
}
