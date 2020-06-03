
#include<stdio.h>
struct height
{
	int f,i;
};
int main()
{
	struct height h1,h2,h3;
	printf("enter the height");
	scanf("%d%d",&h1.f,&h1.i);
		printf("enter the height");
	scanf("%d%d",&h2,&h2.i);
	h3.f=h1.f+h2.f;
	h3.i=h1.i+h2.i;
	if(h3.i>=12)
	{
		h3.f++;
		h3.i=h3.i-12;
	}
	printf("\nfeet=%d,inch=%d",h3.f,h3.i);
}
