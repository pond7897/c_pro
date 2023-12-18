#include<stdio.h>
main(){
	char a = 'A';
	int b = 10;
	float c = 200.0;
	double d = 93.2;
	
	printf("Before\n");
	printf("Character is %c \n", a);
	printf("Numeric character is %d\n",a);
	printf("Integer is %d\n", b);
	printf("Floating is %f\n", c);
	printf("Double is %f\n\n",d);
	
	b = b+a;
	c = c+a;
	d = d+a;
	
	printf("After\n");
	printf("Character is %c \n", a);
	printf("Numeric character is %d\n",a);
	printf("Integer is %d\n", b);
	printf("Floating is %f\n", c);
	printf("Double is %f\n",d);
}
