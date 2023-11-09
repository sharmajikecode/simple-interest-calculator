#include <stdio.h>

int main(){
	
	int p,r,t;
	printf("what is your principal amount?\n");
	scanf("%d",&p);
	printf("what is your of rate of interest?\n");
	scanf("%d",&r);
	printf("how many time of returning amount(in years)?\n");
	scanf("%d",&t);
	
	int i = (p * r * t)/100;
	
	printf("total amount of interest (%d * %d * %d)/100 = %d",p,r,t,i);
	
	return 0;
}
