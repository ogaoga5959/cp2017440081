#include <stdio.h>




int main(void)

{

	int num = 0, i = 0;




	printf("�ϳ��� ������ �Է��Ͻÿ� : ");

	scanf("%d", &num);




	for(i=0;num>=10;i++)

		num = num/10;




	printf("�������� �ڸ����� %d���Դϴ�.\n", i+1);

	

	return 0;




}
