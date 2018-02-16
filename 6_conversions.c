/*6. Write a program that deliberately makes the following mistakes: ? Prints a floating-point number using the %d conversion. ? Prints an integer using the %f conversion. ? Prints a character using the %d conversion.
*/
#include<stdio.h>
void main()
{
	int i;
	char c;
	float f;
	printf("Enter charcter,integer & floating value : ");
	scanf("%c%d%f",&c,&i,&f);
	printf("float to int conversion : %d\n",(int)f);
	printf("int to float conversion : %f\n",(float)i);
	printf("char to int conversion : %d\n",c);
	printf("int to char conversion : %c\n",(char)i);
	
}
