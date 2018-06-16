#include<stdio.h>
#include<math.h>
#define PI 3.14
main()
{
    int r;
    float Area,Cir;
    //printf("%f",PI);
    printf("Please provide the radius of the Circle : ");
    scanf("%d",&r);
    Area = PI*r*r;Cir = 2*PI*r;
    printf("\nArea: %f\nCircumference: %f",Area,Cir);
    return 0;
}
