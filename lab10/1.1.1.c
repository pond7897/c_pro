#include <stdio.h>
int main(){
	char c;
	//printf("Enter character: ");
	do {
		printf("Enter character: ");
		c = getchar();
	}
	while ( c != 'E');
	return 0;
}
