#include <stdio.h>
int getquantity(void);

int main(){
	int amt;
	amt = getquantity();
	printf("quantity: %d",amt);
}

int getquantity(void){
	int qty;
	printf("enter quantity: ");
	scanf("%d",&qty);
	return qty;
}
