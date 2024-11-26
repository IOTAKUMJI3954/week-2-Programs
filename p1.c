#include<stdio.h>
int main(){
	int a,b,c;
	printf("the three numbers are:");
	scanf("%d %d %d",&a, &b, &c);
	if (a>b && a>c){
	  printf("a is the greatest:%d",a);}
	else if (b>a && b>c){
	  printf("b is the greatest:%d",b);}
	else if (c>a && c>b){
	 printf("c is the greatest:%d",c);}
	else{
		printf("none of them is greatest");
	}
	return 0;
}