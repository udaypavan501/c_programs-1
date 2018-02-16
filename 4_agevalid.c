/*4. Write a c program to input and print the age which should be greater than 18 and less than 30, age check should be there and input age recursively until age value is not valid (use goto statement).
*/
#include<stdio.h>
void main()
{
	int age;
	A:printf("Enter the age : ");
	scanf("%d",&age);
	if(age>18&&age<30)
	{
		printf("Your age is : %d\n",age);
		goto A;
	}
	else
	printf("you entered age(%d) is invaild \n",age);
}
