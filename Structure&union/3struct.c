
#include<stdio.h>
struct book
{
	int bno;
	char name[10];
	float price;
};
int main()
{
	struct book b;
	
printf("enter the book number");
scanf("%d",&b.bno);
printf("\nbook name\n");
fflush(stdin);
gets(b.name);
printf("\nbook price");
scanf("%f",&b.price);

printf("\nbookNO=%d",b.bno);
printf("\n name book=%s",b.name);
printf("\n book price=%f",b.price);

}
