#include <stdio.h>
int main() {
	int a;
	int b;
	int c;

	printf("정수를 입력하시오: ");
		scanf("%d" , &a);

		printf("정수를 입력하시오: ");
		scanf("%d" , &b);

		printf("정수를 입력하시오: ");
		scanf("%d" , &c);


		if ((a >= b) && (a >= c)) {
			printf("%d\n" ,a);
}

		else if ((b > a) && (b >= c)) 
			printf("%d\n" ,b);


		else if ((c > a) && (c > b)) 
			printf("%d\n" ,c);


		


			return 0;
}
