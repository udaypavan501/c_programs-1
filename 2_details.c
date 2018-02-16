/*2. Write c program to take name, address, age and height in feet (a float value should be entered), print all values in new lines. 
*/
#include<stdio.h>
void main()
{
 int age;
 char name[100],addr[100];
 float height;
 printf("Enter name,address,age & height in feet : ");
 scanf("%s%s%d%f",name,addr,&age,&height);
 printf("\nName : %s\nAddress : %s\nAge : %d\nHeight : %f feets",name,addr,age,height);

}
