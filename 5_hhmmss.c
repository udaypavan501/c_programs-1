/*5. Write a c program to read time in HH24:MM:SS format using single scanf() statement, make sure input value should be correct, if input values are wrong read them recursively; print the time in HH24:MM:SS if values are correct. 
*/
#include<stdio.h>
void main()
{
    int hh,mm,ss;
	A:printf("Enter time in HH24 MM SS format : ");
	scanf("%d%d%d",&hh,&mm,&ss);
	if(hh<=24&&hh>=1&&mm>=0&&mm<=59&&ss>=0&&ss<=59)
	printf("you entered Time is :: %d:%d:%d\n",hh,mm,ss);
	else
	{
		printf("you entered Time is invalid\n");
		goto A;
	}
}
