#include <stdio.h>
int main(){
	char name[20];
	printf("What is your name? \n");
	gets(name);
	printf("Hi %s, nice to meet you",name);
}
