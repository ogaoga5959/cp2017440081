#include <stdio.h>

	void printerArray(int* arr, int len) {  //������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
	for(int index = 0; index < len; index++) {
	
		printf("array[%d] = %d \n", index, arr[index]); // index�� ������ ���� ���� �� �ִ�.

	}
	}
	

	//�Լ�: findMinIndex()
	//�Է�: �迭(�迭�̸�, �迭����)
	//���: �ּҰ��� �ε���
	int findMinIndex(int* arr, int length) {
	    int minIndex=0;
		
//		�����ð� ����!!
		for(int count=1; count<length; count++) 
		if( minIndex > arr[count])
			minIndex= count;
		

		return minIndex;
	
	}



	//�Լ�: findMin()
	//�Է�: �迭(�迭�̸�, �迭����)
	//���: �迭 �ּҰ�
	int findMin(int* arr, int length) {
		int min=arr[0];
//		�����ð� ����!!
		for(int count=1; count<length; count++) {
		if( min > arr[count])
			min=	arr[count];
		}
		return min;
	}
		//�Լ�: swapElements()
	//�Է�: �迭, �ΰ��� �ε���
	//���: ����
	//�μ�ȿ��: �迭�� �� �ε��� ��Ұ� �ٲ��.
	void swapElement(int* arr, int i, int j) {
		int temp;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	//�Լ�: selectionSort()
	//�Է�: �迭
	//���: ����
	//�μ�ȿ��: �迭�� ����
	void selectionSort(int* arr, int length) {
    int i=0; int j=0;
	}
		
		


int main() {



	int a[] = {30, 35, 27, 15, 40};
	printf("minimum value of the array is %d\n", findMin(a, 5));
		printf("The index of the minimum value is %d\n", findMinIndex(a, 5));
	swapElement(a, 0, 3);
		printerArray(a, 5);
		
	
	return 0;
}