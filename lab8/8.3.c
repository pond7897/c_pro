#include <stdio.h>
void main(){
	int num;
	int sum = 0;
	printf("Enter number: ");
	scanf("%d",&num);
	while (num > 0){
		sum = sum+num;
		printf("Enter number: ");
		scanf("%d",&num);
	}
	printf("summation is %d",sum);
}
