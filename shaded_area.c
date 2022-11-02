#include<stdio.h>
#include<math.h>
int main()
{
    float area,s;
    printf("Enter your square 1 arm : ");
    scanf("%f",&s);

    float square_area=s*s;

    float outer_area = s*s-3.14*(s*s)/4;

    float iner_shaded_area=square_area - outer_area;
    printf(" iner circle area is : %f\n",iner_shaded_area);
    printf(" outer circle area is : %f",outer_area);

    return 0;

}
