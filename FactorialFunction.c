#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("\n enter the number");
	scanf("%d",&n);
	f=fact(n);
	printf("\n result = %d",f);
}

int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
		
	
	}	return f;
}
