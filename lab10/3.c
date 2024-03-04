#include <stdio.h>
#define Size 80
int main(){
	int i = 0;
	char message[Size],c;
	printf("Enter a message: ");
	gets(message);
	printf("One word per line is: ");
	while((c = message[i++]) != '\0'){
		if (c == ' '){
			putchar('\n');	
		}
		else {
			putchar(message);
		}
	}
}
