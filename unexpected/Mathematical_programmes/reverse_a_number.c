/* To reverse a number */

#include<stdio.h>

int main()
{
    int n,i,sum=0;

    printf("Provide the No : ");
    scanf("%d",&n);
    while(n>=1)
    {
        i=n%10;
        sum = sum * 10 + i ;
        n = n/10;
    }
    printf("Sum : %d",sum);
    return 0;
}
