#include <stdio.h>
int main() 

{
	int dan=0;
	int num =1;
	while(1)
	{
		printf("구구단 몇 단을 출력할까요? : ");
		scanf("%d", &dan);
		while(dan>0 && dan<10)

		{
			while (num<10)
			{
				printf("%d x %d = %d\n", dan, num, dan*num);
				num++;
				break;
			} 	
		}
		printf("숫자를 잘 못 입력하셨습니다\n");
		continue;
	}
	return 0;
}