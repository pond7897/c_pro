#include <stdio.h>
int main(){
	int i;
	for (i = 2; i <= 20; i+=2){
		if (i == 20){
			printf("%d",i);
		}
		else {
			printf("%d,",i);
		}
	}
}
