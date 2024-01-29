#include <stdio.h>
int main(){
	int count = 0;
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++){
		if (count %5 == 0)
			printf("\n");
			printf("ASCII %c = %d\t",ch,ch);
			count++;
	}
	return 0;
}
