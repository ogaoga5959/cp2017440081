#include <stdio.h>




int main(void)

{

	int num = 0, i = 0, j = 2;




	printf("하나의 정수를 입력하시오 : ");

	scanf("%d", &num);
	



	for(i=2;;i++)

	{

		if(num==i)

		{

			printf("%d 은(는) 소수입니다.\n", num);

			break;

		}

		else if(num%i==0)

		{
			printf("%d 은(는) 소수가 아닙니다.\n",num);

			break;

		}

	}

	return 0;

}