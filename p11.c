#include<stdio.h>
int main(){
	int d,m,y;
	printf("the date is:");
	scanf("%d",&d);
	printf("the month is:");
	scanf("%d",&m);
	printf("the year is:");
	scanf("%d",&y);
	if ((d<1 || d>31) || (m<1 || m>12)){
	  printf("invalid input");}
	else{
		if (m==2){
		 if((y%4==0 && y%100!=0 )|| y%400==0){
		 
		     if (d>1 && d<29){
		       d+=1;
		       printf("the updated date is:%d/%d/%d",d,m,y);
		     }
		     else if(d==29){
		     	d=1;
		     	m+=1;
		     	printf("the updated date is:%d/%d/%d",d,m,y);
			 }
			 else{
			 	printf("invalid input");}}
		 else{
		 	if (d>1 && d<28){
		       d+=1;
		       printf("the updated date is:%d/%d/%d",d,m,y);
		     }
		     else if(d==28){
		     	d=1;
		     	m+=1;
		     	printf("the updated date is:%d/%d/%d",d,m,y);
			 }
			 else{
			 	printf("invalid input");
		     }
			 }
	    }
	    else if(m==1 || m==3 || m==5 ||m==7 || m==8 || m==10 ){
	    	 if (d>1 && d<31){
		       d+=1;
		       printf("the updated date is:%d/%d/%d",d,m,y);
		     }
		     else if(d==31){
		     	d=1;
		     	m+=1;
		     	printf("the updated date is:%d/%d/%d",d,m,y);
			 }
			 else{
			 	printf("invalid input");}}
		else if(m==4 || m==6 || m==9 || m==11){
			if (d>1 && d<30){
		       d+=1;
		       printf("the updated date is:%d/%d/%d",d,m,y);
		     }
		     else if(d==30){
		     	d=1;
		     	m+=1;
		     	printf("the updated date is:%d/%d/%d",d,m,y);
			 }
			 else{
			 	printf("invalid input");}}
		else if(m==12){
			if (d>1 && d<31){
		       d+=1;
		       printf("the updated date is:%d/%d/%d",d,m,y);
		     }
		     else if(d==31){
		     	d=1;
		     	m=1;
		     	y+=1;
		     	printf("the updated date is:%d/%d/%d",d,m,y);
			 }
			 else{
			 	printf("invalid input");}}
		else{
			printf("invalid input");
		}
	}
	
	
	return 0;
}