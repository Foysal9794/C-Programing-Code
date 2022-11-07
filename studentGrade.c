#include<stdio.h>

int main()

{
    int marks;
    printf("Enter marks : ");
    scanf("%d",&marks);

    if(marks>=80 && marks<=100)
        printf("A+");

    if(marks>=60 && marks<80)
        printf("A-");

    if(marks>=50 && marks<60)
        printf("A");

    if(marks>=40 && marks<50)
        printf("B");

    if(marks>=33 && marks<40)
        printf("C");

    if(marks>=0 && marks<33)
        printf("FAIL");




}
