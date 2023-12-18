#include <stdio.h>
main(){
	double temp_c;
	printf("Enter the temperature in Celsius: ");
	scanf("%lf",&temp_c);
	
	double temp_f = 32+(temp_c*(180.0/100.0));
	printf("The Celsius temperature is %.1f\n",temp_c);
	printf("The Fahrenheit temperature is %.1f\n",temp_f);
	
	return 0;
}
