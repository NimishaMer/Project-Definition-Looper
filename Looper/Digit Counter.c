#include<stdio.h>

int main(){
	int i , j = 0;
	
	printf("ENTER ANY NUMBER : ");
	scanf("%d",&i);
	
	i=(i < 0)? -i : i ;
	
	do{
		i/=10;
		j++;
	}
	while(i != 0);
	printf("TOTAL NOMBER OF DIGITS :%d\n",j);
	
	return 0;
}
