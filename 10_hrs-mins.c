/*10. Write a program that takes hours and minutes as input, and then outputs the total number of minutes. Example: 1 hour 30 minutes = 90 minutes 
*/

#include<stdio.h>
void main()
{
	int mins,hrs;
	printf("enter the hrs mins : ");
	scanf("%d%d",&hrs,&mins);
	mins=hrs*60+mins;
	printf(" total number of minutes :  %d mins ",mins);
	
}
