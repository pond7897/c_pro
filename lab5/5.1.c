#include <stdio.h>
main(){
	float hours,salary;
	printf("Enter the number of hours worked: ");
	scanf("%f",&hours);
	if (hours <= 40)
		salary = 25*hours;
	else 
		salary = 1000+(hours - 40)*40;
	printf("%.2f",salary);
}
