#include <stdio.h>
//PrintArray()
//�Է�: �迭
//���: ����
//�μ�ȿ��: ȭ�鿡 �迭�� ���� ���
void printArray(int arr[], int len){
	for(int index = 0; index<len; index++) {
		printf("array[%d] = %d \n", index, arr[index]);
	}
}
int main() {
	int a[3]={10, 20, 30};
	printArray(a, 3);


	return 0;
}