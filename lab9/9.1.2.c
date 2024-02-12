#include <stdio.h>
void hello(int x);

void main(){
	int num;
	printf("enter number: ");
	scanf("%d", &num);
	hello(num);
}

void hello(int x){
	int i;
	for (i=1; i<=x; i++){
		printf("hello\n");
	}
}
