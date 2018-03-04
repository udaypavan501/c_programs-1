/*2. Write a program that will ask the user to input three integer values from the keyboard. Then it will print the smallest and largest of those numbers.
*/
#include<stdio.h>
void main()
{
	int a,b,c,small,large;
	printf("Enter the three values : ");
	scanf("%d%d%d",&a,&b,&c);
	small=(a<b)?(a<c?a:c):(b<c?b:c);
	large=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("The Smallest no. is : %d\nThe largest no. is : %d",small,large); 
}
