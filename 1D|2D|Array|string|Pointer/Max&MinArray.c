
#include<stdio.h>
int main()
{
	int a[5],max=0,min=32767,i;
	printf("\n enter the number");
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&a[i]);

		if(a[i]>max)
		{
		max=a[i];
		}
		if(a[i]<min)
		{
		min=a[i];
		}
	}
		
	
	printf("\nmax=%d,secmax=%d",max,min);
}
