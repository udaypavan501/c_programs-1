#include <stdio.h>
void main()

{

struct date

{

int day;

int month;

int year;

};

struct details

{

char name[20];

int price;

int code;

int qty;

struct date mfg;

};

struct details item[50];

int n,i;
printf("Enter number of items:");

scanf("%d", &n);

fflush(stdin);

for (i = 0; i < n; i++)

{

fflush(stdin);

printf("Item name: \n");

scanf("%s", item[i].name);

fflush(stdin);

printf("Item code: \n");

scanf("%d", &item[i].code);

fflush(stdin);

printf("Quantity: \n");

scanf("%d", &item[i].qty);

fflush(stdin);

printf("price: \n");

scanf("%d", &item[i].price);

fflush(stdin);

printf("Manufacturing date(dd-mm-yyyy): \n");

scanf("%d-%d-%d", &item[i].mfg.day,&item[i].mfg.month, &item[i].mfg.year);

}

printf(" ***** INVENTORY ***** \n");

printf("------------------------------------------------------------------\n");

printf("S.No.\t| NAME \t| CODE \t| QUANTITY \t| PRICE\t| MFG.DATE \n");

printf("------------------------------------------------------------------\n");

for (i = 0; i < n; i++)

printf("%d \t%-15s %-d \t%-5d \t%-5d\t%d/%d/%d \n", i + 1, item[i].name, item[i].code, item[i].qty,

item[i].price, item[i].mfg.day, item[i].mfg.month,

item[i].mfg.year);

printf("------------------------------------------------------------------\n");

}

