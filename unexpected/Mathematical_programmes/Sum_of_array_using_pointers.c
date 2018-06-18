/*Summing array as a pointer*/

#include<stdio.h>

int main()
{
    int sum=0,sum1=0,a[10],i,*ptr=&a;
    for(i=0;i<=9;i++)
    {
        printf("\nProvide a[%d] Value :",i);
        scanf("%d",&a[i]);
        sum += a[i];
        sum1+= *ptr;ptr++;
    }
    printf("Sum Of array elements : %d",sum);
    printf("Sum Of array elements : %d",sum1);
    return 0;
}
