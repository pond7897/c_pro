#include <stdio.h>
int main(){
	int i;
	for (i = 1; i<=19; i+=2){
		if (i == 19){
			printf("%d",i);
		}
		else {
			printf("%d,",i);
		}
	}
}
