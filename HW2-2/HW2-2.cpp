#include <stdio.h>
int main() 

{
	int input;
	int sum = 0, n=1;

	while (n <= 10)
	{
		printf("���� �Է��ϼ���: ");
		scanf("%d", &input);
		sum += input;
		n++;
	}

	printf("�� ���� %d�Դϴ�.\n", sum);

	return 0;
}