#include<stdio.h>
int main()
{
	int n,r,c,temp,sum=0;

	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		//sum=sum+r*r*r;
		n=n/10;
	}
	n=temp;
	if(n==sum)
	printf("amstrong number");
	else
	printf("not a amstrong  number");
	return 0;
}
