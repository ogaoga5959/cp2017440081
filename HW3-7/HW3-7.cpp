// 7. ���� �迭�� ���� ��ȯ�ϴ� �Լ�

#include <stdio.h>
//�Լ��̸� addArray()
//�Է�: �迭
//���: �迭 �� ��ҵ��� ��
//�μ�ȿ��: ����

int addArray(int arr[], int length) {
	int sum = 0;
	int index = 0;
while ( index < length ) 
	sum += arr[index++];
		return sum;

}

int main() {
	int a[4] = {10, 20, 30, 40};
	int length = 4;


	printf("the sum is %d\n", addArray(a,4));

	
	return 0;
}