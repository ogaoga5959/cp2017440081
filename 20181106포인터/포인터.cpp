#include <stdio.h>
int main() {
 int a = 10;
 int* ptr;
 ptr = &a; // &a;���� & : Ampersand�̸� "address of" a, ���� a�� �ּ�(���� a�� ���� �Ҵ��� �޸��� ù��° �ּ�)
 *ptr = 20; // *ptr = data of ptr, �����ͺ��� ptr�� ����Ű�°��� ������
 // c���� pointer�� �ΰ��� �ǹ� : 1. �޸� �ּ�, 2. �޸� �ּҸ� �������� �ϴ� ���� �ڷ���
 
 printf("a = %d\n", a); 


	return 0;
}