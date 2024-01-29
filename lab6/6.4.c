#include <stdio.h>
main(){
	char x;
	printf("Enter character g or p or f : ");
	scanf("%c",&x);
	switch(x){
		case 'g': printf("good"); break;
		case 'p': printf("pass"); break;
		case 'f': printf("fail"); break;
		default: printf("Invalid character");
	}
}
