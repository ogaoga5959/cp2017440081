#include <stdio.h>
int main() 

{
	int input=1;
	int sum = 0;

	while (input != 0)
	{
		printf("������ �Է��ϼ���: ");
		scanf("%d", &input);
		sum += input;

	}

	printf("�� ���� %d�Դϴ�.\n", sum);

	return 0;
}