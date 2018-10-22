#include <stdio.h>
int main() 

{
	int input=1;
	int sum = 0;

	while (input != 0)
	{
		printf("정수를 입력하세요: ");
		scanf("%d", &input);
		sum += input;

	}

	printf("총 합은 %d입니다.\n", sum);

	return 0;
}