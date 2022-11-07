#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Arms : ");
    scanf("%d%d%d",&a,&b,&c);

    if (a+b>c && b+c>a && c+a>b )
    printf("It Is Triangle");

    else
        printf("It is Not Triangle");
    return 0;
}
