#include <stdio.h>
int main() 

{
	int dan=0;
	int num =1;
	printf("구구단 몇 단을 출력할까요? : ");
	scanf("%d", &dan);

	while (num<10)
	{
		printf("%d x %d = %d\n", dan, num, dan*num);
	num++;
	}

	return 0;
}