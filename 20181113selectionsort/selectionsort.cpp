#include <stdio.h>

	void printerArray(int* arr, int len) {  //������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
	for(int index = 0; index < len; index++) {
	
	       printf("array[%d] = %d \n", index, arr[index]); // index�� ������ ���� ���� �� �ִ�.

	}
	}
	

	//�Լ�: findMinIndex()
	//�Է�: �迭(�迭�̸�, �迭����)
	//���: �ּҰ��� �ε���
	int findMinIndex(int* arr, int length, int start) {
		int minIndex= start;
	
//		�����ð� ����!!
		for(int i=start + 1; i<length; i++) {
		if( arr[minIndex] > arr[i])
	minIndex= i;
	}

		return minIndex;
	
	}



	//�Լ�: findMin()
	//�Է�: �迭(�迭�̸�, �迭����)
	//���: �迭 �ּҰ�
	int findMin(int* arr, int length, int start) {
		int min=arr[start];
    //�����ð� ����!!
		for(int i=start +1; i<length; i++) {
		if( min > arr[i])
		{min=	arr[i];}
		}	
		return min;
	}
    //�Լ�: swapElements()
	//�Է�: �迭, �ΰ��� �ε���
	//���: ����
	//�μ�ȿ��: �迭�� �� �ε��� ��Ұ� �ٲ��.
	void swapElement(int* arr, int i, int j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	//�Լ�: selectionSort()
	//�Է�: �迭
	//���: ����
	//�μ�ȿ��: �迭�� ����
	void selectionSort(int* arr, int length) {
    for(int start = 0; start<length-1; start++){
		int minindex = findMinIndex(arr, length, start);
		swapElement(arr, minindex, start);
	}
	}
		
		


int main() {



	int a[] = {30, 35, 27, 15, 40};
	printf("minimum value of the array is %d\n", findMin(a, 5, 0));
		printf("The index of the minimum value is %d\n", findMinIndex(a, 5, 0));
	

	
	printerArray(a, 5);
		selectionSort(a, 5);
		printerArray(a, 5);
	return 0;
}