#include<stdio.h>
int main(){
	int b,p,c,m,cs;
	printf("enter the marks of 5 subjects:");
	scanf("%d%d%d%d%d",&b,&p,&c,&m,&cs);
	int percentage=b+p+c+cs+m/5;
	if (percentage>=90){
		printf("GRADE A");
	}
	else if(percentage>=80){
		printf("GRADE B");
	}
	else if(percentage>=70){
		printf("GRADE C");
	}
	else if(percentage>=60){
		printf("GRADE D");
	}
	else if(percentage>=40){
		printf("GRADE E");
	}
	else if(percentage<40){
		printf("GRADE F");
	}
	return 0;
}