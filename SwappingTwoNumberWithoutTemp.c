
#include<stdio.h>
	int main()
	{
		int num1,num2;
		printf("enter the two number");
		scanf("%d%d",&num1,&num2);
		num1=num1-num2;
		num2=num1+num2;
		num1=num2-num1;
		printf("after swapping \n first integer=%d\nsecond integer =%d\n",num1,num2);
		
	}
