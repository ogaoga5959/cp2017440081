#include <stdio.h>




int main(void)

{

	int num = 0, i = 0, j = 2;




	printf("�ϳ��� ������ �Է��Ͻÿ� : ");

	scanf("%d", &num);
	



	for(i=2;;i++)

	{

		if(num==i)

		{

			printf("%d ��(��) �Ҽ��Դϴ�.\n", num);

			break;

		}

		else if(num%i==0)

		{
			printf("%d ��(��) �Ҽ��� �ƴմϴ�.\n",num);

			break;

		}

	}

	return 0;

}