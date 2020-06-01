#include<stdio.h>
int main()
{
	int a[5],max=0,smax=0,i;
	printf("\n enter the number");
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&a[i]);
		if(a[i]>max)
		{
			smax=max;
			max=a[i];
		}
		else if(a[i]>smax && a[i]!=max)
		{
			smax=a[i];
		}
	}
	printf("\nmax=%d,secmax=%d",max,smax);
}
