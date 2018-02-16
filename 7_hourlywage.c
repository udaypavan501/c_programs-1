/*7. Write a program that, given the number of hours an employee worked and the hourly wage, computes the employee's weekly pay. Count any hours over 40 as time and a half. 
*/
#include<stdio.h>
void main()
{
	int hrs;
	printf("Enter no of hours an employee worked : ");
	scanf("%d",&hrs);
	printf("hourly wage is 100 RS\n");
	printf("employees weekly pay is %d",(7*hrs)*100);
}
