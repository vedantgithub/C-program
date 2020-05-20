
#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("enter the three number");
	scanf("%d %d %d",&n1 ,&n2,&n3);
	if(n1>=n2 && n1>=n3)
	{
		printf("%d is the largest number",n1);
	}
	
		if(n2>=n1 && n2>=n3)
	{
		printf("%d is the largest number",n2);
	}
		
		if(n3>=n2 && n3>=n1)
	{
		printf("%d is the largest number",n3);
	}
}
