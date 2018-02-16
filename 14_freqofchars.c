/*14. Write a C program to find the frequency of characters in a string. 
*/
#include<stdio.h>
void main()
{
	int freq,j,i;
	char str[100];
	printf("Enter string : ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		freq=0;
		for(j=0;str[j]!='\0';j++)
	if(str[i]==str[j])
	freq++;
	printf("\n frequency of the charcter %c is %d",str[i],freq);
    }
}
