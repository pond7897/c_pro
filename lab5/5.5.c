#include <stdio.h>
main(){
	int unit;
	float cost;
	printf("Please enter the number of units: ");
	scanf("%d",&unit);
	switch(unit){
		case 1:
			cost = unit*100;
			break;
		case 2: case 3:
			cost = unit*95;
			break;
		case 4: case 5:
			cost = unit*90;
			break;
		default: 
			cost = unit*80;
	}
	printf("The total cost is $ %.2f",cost);
}
