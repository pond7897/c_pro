#include <stdio.h>
#include "test.cpp"
main(){
	int b = 2;
	int d = 0;
	d = test();
	d = d*b;
	++b;
	d = test();
	d = d*b;
	printf("d = %d",d);
}
