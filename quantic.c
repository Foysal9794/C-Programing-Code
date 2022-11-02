#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d;
    printf("Enter your number : ");
    scanf("%f%f%f",&a,&b,&c);
    d = (b*b - 4*a*c);
    if (d>=0)
    {
       float x1= (-b-sqrt(d)/2*a);
       float x2= (-b+sqrt(d)/2*a);
        printf("Solution x1 = %f, Solution x2 = %f",x1,x2);
    }
    else
        printf("No Solution");


}
