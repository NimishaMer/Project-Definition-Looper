#include<stdio.h>

int main (){
	int n , f , l ;
	
	printf("ENTER YOU NOMBER :");
	scanf("%d",&n);
	
	l=n % 10 ;
	
	f = n ;
	
	do{
		f/= 10 ;
	}
	while(f>=10);
	
	printf("THE SUM OF FIRST AND THE LAST DISIT :%d\n",f+l);
	return 0;
}
