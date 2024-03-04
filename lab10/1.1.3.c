#include <stdio.h>
#include <math.h>
int cal_power(int x);

void cal_squart(int x);

int main(void){
	int a=100, b=5, c;
	cal_squart(a);
	c=cal_power(b);
	printf("%3d %3d %3d",a,b,c);
}

int cal_power(int x){
	return x*x;
}

void cal_squart(int x){
	float z;
	z = sqrt(x);
	printf("\n %8d %.2f\n",x,z);
}
