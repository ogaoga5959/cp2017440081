#include <stdio.h>


int gVar = 100; // ��������(global variable)
//�Լ� sum()
//�Է�: �� ����
//���: �� ������ ��
//�μ�ȿ�� : ����
int sum(int a, int b) {   //�Լ� ����    1, �Լ��� �̸�(sum)                        
	int c;                          //   2. �Ű������� ����(2)
	c = a + b;                     //  3. �� �Ű� ������ �ڷ���(int, int)
                                   //    4. ��ȯ���� �ڷ���(��ȯ��)	                  �� 4������ �Լ�ȣ���ϱ� ���� �ʿ��� ����
	return c;             //�Լ� ��ü
}                          //�Լ� ���� + �Լ� ��ü = �Լ� ����

//�Լ�: goodPrint()
//�Է�: ����
//���: ����
//�μ�ȿ��: ȭ�鿡 good ���
void goodPrint(){
	printf("good\n");
}

int main (){

	int x = 10, y = 20, z;
	z = sum(x,y);//�Լ� ȣ��
	printf("z=%d\n, x = %d\n", z, x);
	goodPrint();
	return 0;
}