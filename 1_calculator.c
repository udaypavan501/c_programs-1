/*1. Write C code that will display the calculator menu. 
*/
#include<stdio.h>
#include<stdlib.h>
int a,b;
void main()
{
	int op;
	char ch;
	do
	{
		printf("\n -->Choose the operation choice (from 1 to 6) : \n\t1. Add\n\t2. Subtract\n\t3. Multiply\n\t4. Divide\n\t5. Modulus \n\t6.Quit\n\t");
		scanf("%d",&op);
		switch(op)
		{
			case 1:result();printf("\n \tAddition : %d\n",a+b);
			break;
			case 2:result();printf("\n \tSubtraction : %d\n",a-b);
			break;
			case 3:result();printf("\n \tMultiplication : %d\n",a*b);
			break;
			case 4:result();printf("\n \tDivide : %d\n",a/b);
			break;
			case 5:result();printf("\n \tModulus : %d\n",a%b);
			break;
			case 6:printf("\t\t*** Thank you ***");
			exit(0);
			
		}
		printf("\n\tYou want to continue the operation (press 'y') : ");
		fflush(stdin);scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}
int result()
{
	printf("\n\tEnter your two numbers : ");
	scanf("%d%d",&a,&b);
}
