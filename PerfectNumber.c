#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("entre the number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	printf("it is perfect number");
	else
	printf("not  a perffet numberr");
}
