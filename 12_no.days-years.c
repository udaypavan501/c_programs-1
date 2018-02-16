/*12. Write a C program to input number of days from user and convert it to years, weeks and days. 
*/
#include<stdio.h>
void main()
{
	int d,y,w;
	printf("Enter no of days : ");
	scanf("%d",&d);
	y=d/365;
	w=(d%365)/7;
	d=(d%365)%7;
	//d=d-(y*365+w*7);
	printf("%d years %d weeks %d days",y,w,d);
}
