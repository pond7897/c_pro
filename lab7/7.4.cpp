#include <stdio.h>
int main(){
	int year,i;
	float amount, rate;
	
	printf("Please enter original amount: "); 
	scanf("%f",&amount);
	printf("Enter rate: "); 
	scanf("%f",&rate);
	printf("Enter year: "); 
	scanf("%d",&year);
	
	printf("Year \t Deposit \n");
	for (i = 0; i<year; i++){
		amount *= (1+rate);
		printf("%d\t %.2f\n",(i+1),amount);
	}
	
}
