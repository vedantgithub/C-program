

#include<stdio.h>
struct student
{
	int rno;
	char name[10];
	 float marks;
};
int main()
{
	struct student s;
	printf("enter name,rno,marks");
	gets(s.name);
	scanf("%d",&s.rno);
	scanf("%f",&s.marks);
	
	printf("\n");
	printf("\n name=%s",s.name);
	printf("\nroll no=%d",s.rno);
	printf("\n marks=%f",s.marks);
}
