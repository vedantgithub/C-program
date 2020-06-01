

#include<stdio.h>
	int main()
	{
		int a[5],n,i,f=0;
		printf("\n enter the number");
		for(i=0;i<5;i++)
		
			scanf("\n%d",&a[i]);
			printf("\n enter the number to be search");
			scanf("\n%d",&n);
			
			for(i=0;i<5;i++)
			{
				if(a[i]==n)
				{
					f=1;
					break;
				
				}
			
			}
			if(f==1)  //(f)
			{
				printf("\n number is found =%d",i+1);
			}
			else
			{
				printf("\n number is not found");
			}
		
		
	}
