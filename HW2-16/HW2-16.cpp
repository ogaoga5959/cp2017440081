#include <stdio.h>




int main(void)

{

	int num = 0, i = 0;




	printf("하나의 정수를 입력하시오 : ");

	scanf("%d", &num);




	for(i=0;num>=10;i++)

		num = num/10;




	printf("이정수의 자릿수는 %d개입니다.\n", i+1);

	

	return 0;




}
