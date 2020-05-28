
#include<stdio.h>
int main()
{
	int i,n,range;
	printf("enter the number");
	scanf("%d",&n);
	
	printf("enter the range");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
		
	}
	return 0;
}
