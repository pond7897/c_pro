#include <stdio.h>
main(){
	int x = 5;
	x = 10;
	printf("4.1) x = 10 = %d\n",x);
	x+=2;
	printf("4.2) x += 2 = %d\n",x);
	x*=4;
	printf("4.3) x *= 3 = %d\n",x);
	x/=x+2;
	printf("4.4) x /= x+2 = %d\n",x);
}
