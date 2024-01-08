#include <stdio.h>
main (){
	printf("Please input the score in the same line order by subject\n");
	printf("Subject => Mathematics English Chemical Physical Computer\n");
	int score1,score2,score3,score4,score5;
	int sum[3],i;
	printf("For example => student A: 50 60 70 80 90\n");
	for (i = 0; i <3; i++){
		printf("Student %d: ",(i+1));
		scanf("%d %d %d %d %d",&score1,&score2,&score3,&score4,&score5);
		sum[i] = score1+score2+score3+score4+score5;
	}
	
	printf("\n\n\nTotal Score\n");
	for (i = 0; i<3; i++){
		printf("Student %d: %d\n",(i+1),sum[i]);	
	}
}

