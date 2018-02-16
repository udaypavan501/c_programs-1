/*8. A professor generates letter grades using this table. 
  
  % right      grade   -----------      -----    0 - 60         F    61 - 70      D    71 - 80      C    81 - 90      B    91 - 100    A  
  
  last digit   modifier   ----------       --------           1-3             -       4-7               <blank>       8-0        +     For example, 81=B-, 94=A, and 68=D+. An F is only an F. There is no F+ or F-.   Given a numeric grade, print the letter grade and any modifier. 
*/
#include<stdio.h>
void modifier(int);
void main()
{
   int p;
   printf("Enter student percentage % : ");
   scanf("%d",&p);
   if(p>=91&&p<=100)
   {
   printf("\nstudent grade for %d % = A",p);
   modifier(p);
   }
   else if(p>=81&&p<=90)
   {
   printf("\nstudent grade for %d % = B",p);
   modifier(p);
   }
   else if(p>=71&&p<=80)
   {
   printf("\nstudent grade for %d % = c",p);
   modifier(p);
   }
   else if(p>=61&&p<=70)
   {
   printf("\nstudent grade for %d % = D",p);
   modifier(p);
   }
   else if(p>=0&&p<=60)
   printf("\nstudent grade for %d % = F",p);
   else
   printf("Invalid percentage");
}
void modifier(int p)
{
	int n;
	n=p%10;
	if(n>=1&&n<=3)
	printf("-");
	else if(n>=4&&n<=7)
	printf("");
	else
	printf("+");
}

