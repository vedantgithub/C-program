#include<stdio.h>
int sum(int[]);
int main()
{
	int a[10],s,i,n;
	//	printf("enter the size of array");
	//	scanf("%d",&n);
	
	printf("enter the element");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	s=sum(a);
	printf("\n sum=%d",s);
	
}
int sum(int a[])
{
	int i,s=0,n;
	for(i=0;i<10;i++)
	{
		s=s+a[i];
	}
	
	return s;
}
