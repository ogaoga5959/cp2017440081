#include<stdio.h>
int main () {

	int n, i=7;
	int sum=0;
	printf("7�̻��� ���ڸ� �ϳ� �Է��Ͻÿ�: ");
	scanf("%d", &n);

	
	while( n>= 7)
	{
	for(i=7; n>= i; i++)
		{sum += i;}
		
	printf("7���� %d������ �������� ���� %d�Դϴ�\n", n, sum); break;
	}
	printf("�Է��Ͻ� ���ڰ� 7���� �۽��ϴ�\n");
	return 0;
}
