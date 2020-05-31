#include<stdio.h>
int sum(int ,int);
int sub(int ,int);
int mult(int ,int);
int div(int ,int);
int main()
{
	int a,b,c;
	printf("enter the two number");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("\n addition=%d",c);
	
	c=sub(a,b);
	printf("\n subtraction=%d",c);
	
	c=mult(a,b);
		printf("\n multiplication=%d",c);

		c=div(a,b);
		printf("\n division=%d",c);

}

int sum(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int mult(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}












