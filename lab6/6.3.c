#include <stdio.h>
main(){
	int x = 2, y =1, z = 1;
	switch(x) {
	case 0: x = 2;
			y = 3;
	case 1: x = 4;
			break;
	default: x = 3;
			y = 1	;
	}
	printf("x = %d y = %d z = %d",x,y,z);
}
