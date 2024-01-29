#include <stdio.h>
int main(){
	int i,j,k,l;
	int num = 5;
	for (i = 1; i<= num; i++){
		
		for (j = num; j>i; j--){
			printf(" ");
		}
		for (k = i; k >= 2 ; k--){
			printf("%d",k);
		} 
			
		for (l = 1; l <= i; l++){
			printf("%d",l);
		}
		printf("\n");
	}
}
