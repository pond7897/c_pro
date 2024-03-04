#include <stdio.h>
#include <math.h>
float distance(float x1, float x2, float y1, float y2);
float getValue(char input[]);
main(){
	float x1,x2,y1,y2;
	x1 = getValue("Please enter a value for x1: ");
	x2 = getValue("Please enter a value for x2: ");
	y1 = getValue("Please enter a value for y1: ");
	y2 = getValue("Please enter a value for y2: ");
	
	float dis = distance(x1,x2,y1,y2);
	printf("The distance between the points is %.2f",dis);
}
float getValue(char input[]){
	float value;
	printf("%s",input);
	scanf("%f",&value);
	return value;
}
float distance(float x1, float x2, float y1, float y2){
	float distance = sqrt((pow((x2-x1),2))+ (pow((y2-y1),2)));
	return distance;
}

