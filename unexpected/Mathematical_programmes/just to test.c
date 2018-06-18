#include<stdio.h>
/*This program is to prove that when you dividing a number continuously then after lot of iteration it eventually falls
to zero so eventually you have to workout on your way of dealing with the while loop*/
int main()
{
    int n,i;
    printf("Enter the Number N : ");
    scanf("%d",&n);
    while(n>=1)
        {
            n=n/10;
            printf("n = %d\n",n);
        }
     return 0;
}
