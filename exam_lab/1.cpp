#include <stdio.h> 
// 1 
/*int main(){
	int i = 10, j = 10;
	while (j >= 0){
		j -= 2;
		printf("%d\n",j);
	}
}*/

// 2
/*int main(){
	int num[10] = {1,2,3,4,5,6,7,8,9,10};
	float length = sizeof(num)/sizeof(num[0]);
	float avg = 0;
	int sum= 0, i=0 ;
	do {
		sum += num[i];
		i++;
	}
	while(i<=length);
	avg = sum/length;
	printf("Avg: %.1f",avg);
	
}*/

//3
void maxmin(int num[], int size);
int main(){
	int num;
	printf("Enter n: ");
	scanf("%d",&num);
	int number[num-1];
	int length = sizeof(number)/sizeof(number[0]);
	int i;
	for (i = 0; i < num; i++){
		printf("Enter value[%d]: ",i+1);
		scanf("%d",&number[i]);
	}
	maxmin(number,length);
}
void maxmin(int num[],int size){
	int i;
	int max = -9999999, min = 9999999, positionMax, positionMin;
	for (i = 0; i<=size; i++){
		if ( num[i] > max){
			max = num[i];
			positionMax = i;
		}
		
		if ( num[i] < min){
			min = num[i];
			positionMin = i;
		}
	}
	//printf("%d",max);
	printf("Max number is: value[%d] = %d\n",positionMax+1,max);
	printf("Min number is: value[%d] = %d\n",positionMin+1,min);
}
