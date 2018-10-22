#include <stdio.h> 
int main(void) 
{
int answer =47; 
int guess=0;
int tries;

	for (tries = 1; tries <= 11; tries++)
	{
		printf("정답을 추측하여 보시오: "); 
		scanf("%d", &guess); 

		if (guess >answer) 
			printf("제시한 정수가 정답보다 높습니다.\n"); 
		else if (guess <answer) 
			printf("제시한 정수가 정답보다 낮습니다.\n");
		else if(guess = answer)
			{printf("축하합니다. 시도횟수=%d\n", tries); return 0;}
	} 
	printf("GAME OVER!!!!!!! 정말 머리가 딸리시는 군요?!\n");

return 0;
}