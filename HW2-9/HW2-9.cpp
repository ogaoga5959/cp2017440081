#include <stdio.h>
int main() 

{
	int dan=0;
	int num =1;
	while(1)
	{
		printf("������ �� ���� ����ұ��? : ");
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
		printf("���ڸ� �� �� �Է��ϼ̽��ϴ�\n");
		continue;
	}
	return 0;
}