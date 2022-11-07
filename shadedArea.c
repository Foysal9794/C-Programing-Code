#include<stdio.h>
#include<stdio.h>

int main()

{
    float area,arm;
    printf("Enter your arm : ");
    scanf("%f",&arm);

    area = arm*arm -3.14159 * (arm/2)*(arm/2);


    printf("Shaded area is : %lf",area);


}
