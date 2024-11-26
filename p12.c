#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character\n");
	scanf("%c",&c);
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
	printf("%d is an alphabet",c);
	else if(c>='0' && c<='9')
	printf("%d is a digit",c);
	else
	printf("%d is a special character",c);
	return 0;
}