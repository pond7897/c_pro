#include <stdio.h>
void main(){
	int i = 1;
	int sum = 0;
	int num;
	while(i<=5){
		printf("enter number: ");
		scanf("%d",&num);
		sum += num;
		i++;
	}
	printf("summation is %d",sum);
}
