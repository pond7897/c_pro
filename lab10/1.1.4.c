#include <stdio.h>
int sub_add(int x, int y);
int main(void){
		int a,b,c,d,r,s,t,u;
		a=1,b=2,c=3,d=4;
		r = sub_add(a,b);
		s = sub_add(r,c);
		t = sub_add(sub_add(s,d),sub_add(5,6));
		u = sub_add(t+7,s+8);
		printf("%d %d %d %d",r,s,t,u);
	}
int sub_add(int x, int y){
	int z = x+y;
	return z;
}
