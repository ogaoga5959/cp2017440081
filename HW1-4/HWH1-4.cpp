#include <stdio.h>
int main() {
	int a;

	printf("����(����)�� �Է��Ͻÿ�: ");
		scanf("%d" , &a);

		if ( 100>= a && a >= 80  ) {
			printf ("����� ��� : A\n");
		}

		else if ( 79>= a && a >= 60) 
			printf ("����� ��� : B\n");
		
		
		else if ( 59>= a && a >= 40) 
			printf ("����� ��� : C\n");
	
		
		else if ( 39>= a && a  >= 20) 
			printf ("����� ��� : D\n");
		
		
		else if ( 19 >= a && a  >= 0) 
			printf ("����� ��� : E\n");
		
		
		
		else 
			printf("������ �� �� �Է��ϼ̽��ϴ�.\n"); 

			return 0;
}
