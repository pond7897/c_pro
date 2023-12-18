#include <stdio.h>
main(){
	double a = 12.3;
	float b = 24.6;
	long int c = 3;
	char d = 'a';
	short e = 4;
	int f = 26;
	printf("3.1) a+b+c+d+e+f = %f\n",a+b+c+d+e+f);
	printf("3.2) e/c+f = %d\n",e/c+f);
	printf("3.3) b/c+e+a = %f\n",b/c+e+a);
	printf("3.4) ((int)a +c)+e = %d\n",((int)a +c)+e);
	printf("3.5) (a+b)/c+d-e*f = %f\n",(a+b)/c+d-e*f);
}
