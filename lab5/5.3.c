#include <stdio.h>
#define SENIORCOST 8000.00
#define JUNIORCOST 3000.00
int main(){
	char status;
	printf("Enter the status code (s S j J): ");
	scanf("%c",&status);
	if (status == 's' || status == 'S')
		printf("The pay is $%.2f",SENIORCOST);
	else 
		printf("The pay is $%.2f",JUNIORCOST);
}
