#include <stdio.h>
//�Լ� printArray ()
//�Է�: �迭
//���: ����
//�μ�ȿ�� : ȭ�鿡 ��� ��Ҹ� ���
/*void printArray(int arr[], int len) {*/ //(�迭�̸�[], �迭����)
	void printerArray(int* arr, int len) {  //������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
	for(int index = 0; index < len; index++) {
	
		printf("array[%d] = %d \n", index, arr[index]); // index�� ������ ���� ���� �� �ִ�.

	}

}


int main() {



	int a[3] = {10, 20, 30};//�迭 �ʱ�ȭ ���
	int* ptr;
	//�迭�� �̸��� ����ϸ� �� �迭 ù ����� �����Ͱ��� �ȴ�.
	printerArray(a, 3);

	
	return 0;
}