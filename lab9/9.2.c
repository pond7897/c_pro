#include <stdio.h>

void Absnum(double num);
int main(){
	double number;
	printf("Enter number: ");
	scanf("%lf",&number);
	Absnum(number);
}
void Absnum(double num){
	double absValue;
	if (num < 0){
		absValue = -(num);
	}
	else absValue = num;
	printf("\nThe absolute value of %.0lf is %.0lf",num,absValue);
}
