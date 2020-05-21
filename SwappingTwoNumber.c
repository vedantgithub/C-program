#include<stdio.h>
	int main()
	{
		int num1,num2,temp;
		printf("enter the two number");
		scanf("%d%d",&num1,&num2);
	
			printf("before swapping \n first integer=%d\nsecond integer =%d\n",num1,num2);
		temp=num1;
		num1=num2;
		num2=temp;
			printf("after swapping \n first integer=%d\nsecond integer =%d\n",num1,num2);
	}
