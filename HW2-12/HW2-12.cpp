#include <stdio.h>




int main(void)

{

	int num = 0, max = 0, i = 0;




	printf("0�� �Է��ϸ� ����˴ϴ�.\n");




	while(1)

	{

		printf("�����Է� : ");

		scanf("%d", &num);

		if(max<num)

			max = num;

		else if(num==0)

			break;

	}

	printf("�Է¹��� �ִ��� %d�Դϴ�.\n", max);




	return 0;

}


