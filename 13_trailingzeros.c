/*13. Write a C program to input any number from user and count number of trailing zeros in the given number using bitwise operator. 
*/
#include<stdio.h>
void main()
{
	int n,c=0;
	char str[100];
	printf("Enter any number : ");
	scanf("%d",&n);
	itoa(n,str,2);
	printf("The binary number of %d is %s\n",n,str);
	if(n!=0)
	while(!(n & 1))//while((n & 1)==0)
	{
		c++;
		n>>=1;
	}
	printf("Total number of trailing zeros : %d",c);
}
