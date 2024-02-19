#include <stdio.h>
#include <math.h>
float distance(float x1, float x2, float y1, float y2);
float getValue(char[] text){
	float value;
	printf("%s",text);
	scanf("%f",&value);
	return value;
}
main(){
	float x1,x2,y1,y2;
	x1 = getValue("Please enter a value for x1: ");
	x2 = getValue("Please enter a value for x2: ");
	y1 = getValue("Please enter a value for y1: ");
	y2 = getValue("Please enter a value for y2: ");
	
	float dis = distance(x1,x2,y1,y2);
	printf("The distance between the points is %.2f",dis);
}
float distance(float x1, float x2, float y1, float y2){
	float distance = sqrt((pow((x2-x1),2)+ (pow((y2-y2),2)));
	return distance;
}

