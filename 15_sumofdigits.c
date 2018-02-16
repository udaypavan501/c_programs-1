/*15. Write a C program to calculate the sum of digits of a number.
*/
#include<stdio.h>
void main()
{
	int num,sum=0,d;
	printf("Enter any number : ");
	scanf("%d",&num);
	while(num)
	{
		d=num%10;
		sum=sum+d;
		num=num/10;
	}
	printf("sum of digits of a number %d",sum);
}
