#include<stdio.h>
int sumofdiagonal(int [3][3]);
int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int s;
	s=sumofdiagonal(a);
	printf("\nsum of array=%d",s);
	
}
int sumofdiagonal(int a[3][3])
{
	int i,j,s=0;
	for(i=0;i<3;i++)
	{
		for(j=1;j<3;j++)
		{
			if(i==j)
			{
				s=s+a[i][j];
			}
		}
	}
	return s;
}
