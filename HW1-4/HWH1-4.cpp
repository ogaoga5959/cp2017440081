#include <stdio.h>
int main() {
	int a;

	printf("점수(정수)를 입력하시오: ");
		scanf("%d" , &a);

		if ( 100>= a && a >= 80  ) {
			printf ("당신의 등급 : A\n");
		}

		else if ( 79>= a && a >= 60) 
			printf ("당신의 등급 : B\n");
		
		
		else if ( 59>= a && a >= 40) 
			printf ("당신의 등급 : C\n");
	
		
		else if ( 39>= a && a  >= 20) 
			printf ("당신의 등급 : D\n");
		
		
		else if ( 19 >= a && a  >= 0) 
			printf ("당신의 등급 : E\n");
		
		
		
		else 
			printf("점수를 잘 못 입력하셨습니다.\n"); 

			return 0;
}
