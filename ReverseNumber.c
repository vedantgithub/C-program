#include<stdio.h>
int main()
{
	int n,r=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=r*10;
		r=r+n%10;
		n=n/10;
	}
	printf("reverse of the number is %d\n",r);
	return 0;
}
