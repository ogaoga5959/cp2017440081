#include <stdio.h>
int main() {

	//======이 위는 당분간 무시


	//ctrl-k, ctrl -f : format, 소스코드 선택영역을 예쁘게 포맷한다.
	//ctrl-] : matching 괄호(parenthesis)
	//ctrl-k, ctrl-c: 선택한 영역을 Comment out
	//ctrl-k, ctrl-u: undo comment out
	//순서도(Flow chart)의 목적: 다른 사람이 볼 때 쉽게 볼수 있도록


	/*int count =1;
	while (count <= 10) {
	printf("count = %d\n", count);
	count = count+1 ;
	}

	*/
/*
	int count =1;
	while (count <= 10) 
		printf("count = %d\n", count++);*/
	//한 줄만 있을때는 중괄호 안해도 됨

	//1에서부터 100까지 3의 배수만 화면의 출력

	/*count =1;
	while(count<=100) {

		if (count % 3 ==0) 
			printf("count =%d\n", count);
		count++;
	}*/

	//1에서부터 100까지 3의 배수를 제외한 정수만 화면에 출력

	//count =1;
	//while(count<=100) {

	//	if (count % 3 ==1 || count % 3 == 2)


	//		printf("count =%d\n", count);
	//	count++;
	//}

	//키보드에서 정수를 입력받아 3의 배수 여부를 알려주는 프로그램
	//위의 작업을 반복적으로 수행하고 사용자가 100을 입력하면 종료한다
	/*int input;
	while (1) {
	printf("정수를 입력하시오: ");
	scanf("%d" , &input);
	if(input ==100)
		break;
	if(input > 1000) {
		printf("입력한 정수가 1000보다 큽니다. 다시 입력해 주세요\n");
	continue;
	}
	if (input%3 == 0)
		printf("입력한 정수 %d는 3의 배수입니다\n", input);
	else 
		printf("입력한 정수 %d는 3의 배수가 아닙니다\n", input);


	
	}
*/
	
	//1에서 100까지의 정수의 합을 구하시오
	int sum = 0, i=1;

	while(i<=100) {
	/*	sum = sum + i;
		i++;*/

		//sum = i + i++;
		sum += i++;
	}
	printf("the sum is %d\n", sum);






	printf("\n프로그램 종료!!!!!!!!!!!!\n");
	//======이 아래도 당분간 무시

	return 0;
}