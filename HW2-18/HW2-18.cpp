#include <stdio.h>

int main() {

	int i, sum=0;

	for( i=0; i<=100; i++)

	{
		if(i%5 == 0){
			sum+= i;}
	}

	printf("1���� 100������ 5�� ����� ���� %d�Դϴ�\n", sum);

	return 0;
}