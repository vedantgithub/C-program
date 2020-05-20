#include<stdio.h>
int main()
{
	char ch;
	printf("enter the alphabet");
	scanf("%c",&ch);
	switch (ch)
	{
	
	case 'A' :
	case 'a' :
	case 'E' :
	case 'e':
	case 'I':
	case 'i':
	case 'O':
	case 'o':
	case 'U':
	case 'u':	
		printf("%c is a vowel",ch);
		break;
		
		default:
			printf("%c is not a vowel",ch);
}
}
