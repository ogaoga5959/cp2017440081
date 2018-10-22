#include <stdio.h>




int main(void)

{

	int num = 0, max = 0, i = 0;




	printf("0을 입력하면 종료됩니다.\n");




	while(1)

	{

		printf("숫자입력 : ");

		scanf("%d", &num);

		if(max<num)

			max = num;

		else if(num==0)

			break;

	}

	printf("입력받은 최댓값은 %d입니다.\n", max);




	return 0;

}


