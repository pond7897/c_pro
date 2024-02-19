#include <stdio.h>
int main(){
	int x=10,y=10,z=20;
	int sum_int = sum(x,y,z);
	printf("%d",sum_int);
}
int sum(int x,int y,int z){
	int sum = x+y+z;
	return sum;
}
