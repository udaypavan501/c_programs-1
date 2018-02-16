/*18. Write a C Program to Extract Last two Digits of a given Year. 
*/
#include<stdio.h>
void main()
{
	int yr;
	printf("Enter any year");
	scanf("%d",&yr);
	printf("Last two Digits of a given Year : %d",yr%100);
}
