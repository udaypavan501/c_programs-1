/*1. Write a c program to take input of two numbers, find their sum, product and sum of the squares. 
*/
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the two numbers");
	scanf("%d%d",&a,&b);
	printf("sum of the two numbers is : %d\n",a+b);
	printf("product of the two numbers is : %d\n",a*b);
	printf("sum of the squares of two numbers is : %d\n",a*a+b*b);

}
