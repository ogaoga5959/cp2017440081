#include <stdio.h> 
int main(void) 
{
int answer =47; 
int guess=0;
int tries;

	for (tries = 1; tries <= 11; tries++)
	{
		printf("������ �����Ͽ� ���ÿ�: "); 
		scanf("%d", &guess); 

		if (guess >answer) 
			printf("������ ������ ���亸�� �����ϴ�.\n"); 
		else if (guess <answer) 
			printf("������ ������ ���亸�� �����ϴ�.\n");
		else if(guess = answer)
			{printf("�����մϴ�. �õ�Ƚ��=%d\n", tries); return 0;}
	} 
	printf("GAME OVER!!!!!!! ���� �Ӹ��� �����ô� ����?!\n");

return 0;
}