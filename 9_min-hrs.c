/*9. Write a program that takes minutes as input, and then outputs the total number of hours and minutes.   Example: 90 minutes = 1 hour 30 minutes 
*/
#include<stdio.h>
void main()
{
	int mins,hrs;
	printf("enter the minutes : ");
	scanf("%d",&mins);
	hrs=mins/60;
	mins=mins%60;
	printf(" total number of hours and minutes : %d hr %d min ",hrs,mins);
	
}
