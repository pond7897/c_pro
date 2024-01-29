#include <stdio.h>
int main(){
	char color;
	printf("Enter a color of the Thai flag [R,W,B]: ");
	scanf("%c",&color);
	
	switch(color){
		case 'R': case 'r': printf("Red\n"); printf("Represents the nation"); break;
		case 'W': case 'w': printf("White\n"); printf("Evokes the religion"); break;
		case 'B': case 'b': printf("Blue\n"); printf("Symbolizes the monarchy"); break;
		default: printf("Invalid color"); 
	}
}
