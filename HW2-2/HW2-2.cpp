#include <stdio.h>
int main() 

{
	int input;
	int sum = 0, n=1;

	while (n <= 10)
	{
		printf("수를 입력하세요: ");
		scanf("%d", &input);
		sum += input;
		n++;
	}

	printf("총 합은 %d입니다.\n", sum);

	return 0;
}