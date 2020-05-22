#include <stdio.h>  
int main()  
{  
    int n,i,f=1;  
    printf("Enter the number whose factorial you want to calculate?");  
    scanf("%d",&n);  
    for(i=n;i>=1;i--)
    {
    	f=f*i; 	
	}
 
printf("factorial is %d",f);
}
