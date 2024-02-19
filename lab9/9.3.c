#include <stdio.h>
float meterTocen(int inch);

main(){
	int inch;
	float centi;
	printf("Enter inch: ");
	scanf("%d",&inch);
	centi = meterTocen(inch);
	printf("Inch: %d, Centimeters: %.2f",inch,centi);
}
float meterTocen(int inch){
	float centi;
	centi = inch*2.54;
	return centi;
}
