#include <stdio.h>
int main() {
	int a;
	int b;
	int c;

	printf("������ �Է��Ͻÿ�: ");
		scanf("%d" , &a);

		printf("������ �Է��Ͻÿ�: ");
		scanf("%d" , &b);

		printf("������ �Է��Ͻÿ�: ");
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
