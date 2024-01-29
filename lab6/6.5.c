#include<stdio.h>
main() {
	float x,y,result;
	printf("Enter first number: "); scanf("%f",&x);
	printf("Enter second number: "); scanf("%f",&y);
	if (x>y){
		result = x/y;
		printf("the result is %.2f/%.2f = %.2f",x,y,result);
	}
	else {
		result = y/x;
		printf("the result is %.2f/%.2f = %.2f",y,x,result);
	}
}
