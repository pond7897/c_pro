#include <stdio.h>
float celTofaren(float cel);

main (){
	float cel,faren;
	printf("Enter celsius: ");
	scanf("%f",&cel);
	faren = celTofaren(cel);
	printf("Celsius %.2f, Fahrenheith: %.2f",cel,faren);
}

float celTofaren(float cel){
	float faren;
	faren = 32+(cel*(180.0/100.0));
	return faren;
}
