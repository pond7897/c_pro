#include <stdio.h>
#define Size 80
int main(){
	char c1,c2,c3,c4,c5;
	printf("Enter 5 character: ");
	c1 = getchar();
	c2 = getchar();
	c3 = getchar();
	c4 = getchar();
	c5 = getchar();
	printf("After convert: ");
	putchar(c1);
	putchar(c2+1);
	putchar(c3);
	putchar(c4+1);
	putchar(c5);
} 
int main(){
	char c,character[Size];
	int i = 0;
	printf("Enter 5 character: ");
	do {
		c = getchar();
		character[i] = c;
		i++;
	} while(i <= 5);
	
	
	for (i = 0; i < 5; i++){
		if (character[1] && character[3]){
			putchar(character[i]+1);	
		}
		else {
			putchar(character[i]);	
		}	
	}
}

