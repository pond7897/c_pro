#include <stdio.h>
void exchange(int x, int y);

int main(void){
	int a = 10;
	int b = 5;
	printf("%d %d\n",a,b);
	exchange(a,b);
	printf("%d %d\n",a,b);	
}
void exchange(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("%d %d\n",x,y);
}
