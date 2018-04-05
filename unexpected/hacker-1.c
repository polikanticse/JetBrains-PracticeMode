//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/tutorial/
/*Read different types of data from standard input, process them as shown in output format and print the answer to standard output.

Input format:
First line contains integer N.
Second line contains string S.

Output format:
First line should contain N x 2.
Second line should contain the same string S.

Constraints:

where S length of string S*/


#include <stdio.h>
#include <string.h>
int main(){
	int num,count,i;
	char str[15];
	scanf("%d",&num);
	scanf("%s",str);
	//scanf("%[^\n]%*c", str);
	//gets(str);
	if (num >= 1 && num <= 10 )
       { num *=2;
        printf("%d",num);}
    for (i=0;str[i]=='\0';i++)
        {count +=1;}
   // if (count <= 15 && count >=1)
        printf("\n%s",str);
	return 0;
}

