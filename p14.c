#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character\n");
	scanf("%c",&c);
	if(c>='a' && c<='z')
	printf("%d is a lowercase alphabet",c);
	else if(c>='A' && c<='Z')
	printf("%d is an uppercase alphabet",c);
	else
	printf("%d is not an alphabet",c);
	return 0;
}