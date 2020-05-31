
#include<stdio.h>

	void swap(int*,int*); 
	int main()
	{
		int a=10,b=20;
		printf("enter the two no.");
		scanf("%d%d",&a,&b);
	swap(&a,&b);  
		
	}
	void swap(int *p,int *q)
	{
		int r;
		r=*p;
		*p=*q;
		*q=r;
		printf("after swapping");
		printf("\n value1 =%d,value2=%d",*p,*q);
	}
