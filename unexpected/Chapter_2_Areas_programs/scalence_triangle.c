/* To include the area of the scalene triangle : to find it you need two sides and an angle between them*/
/* Source : https://sciencing.com/area-scalene-triangle-10015426.html */

#include<stdio.h>
#include<math.h>

//It seems that the math header already has pi value as M_PI so just include it and also
//Sin function takes the values into radians so you have to convert the degree value to radians to get the values

int main()
{
    float Area;
    int s1,s2,angle;
    printf("Please Give the two sides and the angle (S1,S2,ANGLE):") ;
    scanf("%d\n%d\n%d",&s1,&s2,&angle);
    Area = (s1*s2*sin((M_PI/180)*angle))/2;
    printf("Area : %f",Area);
    return 0;
}

/*
#include<stdio.h>
#include<math.h>

int main() {
   int s1, s2, angle;
   float area;

   printf("\nEnter Side1 : ");
   scanf("%d", &s1);

   printf("\nEnter Side2 : ");
   scanf("%d", &s2);

   printf("\nEnter included angle : ");
   scanf("%d", &angle);

   area = (s1 * s2 * sin((M_PI / 180) * angle)) / 2;

   printf("\nArea of Scalene Triangle : %f", area);
   return (0);
}
*/
