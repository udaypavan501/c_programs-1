/*11. Write a procedure that counts the number of words in a string. Write a program to test your new procedure. Note: Count the words in a phrase. Returns integer, number of words in the phrase
*/
#include<stdio.h>
void main()
{
	int now=1,i;
	char str[100];
	printf("Enter string : ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	if(str[i]==' ')
	now++;
    }
	printf("\n no. of words are %d",now);
	
}
