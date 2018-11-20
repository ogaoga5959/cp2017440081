#include <stdio.h>

void selectionSort(int* arr, int length) {
    for(int start = 1; start<length; start++){
		insertElement(arr, start);

	}
	}

//void insertElement(int* arr, int length) {
//	int i, j; 
//
//    // ���� ���ĵ� �迭�� i-1�����̹Ƿ� i-1��°���� �������� �����Ѵ�.
//    // j ���� ������ �ƴϾ�� �ǰ�
//    // key ������ ���ĵ� �迭�� �ִ� ���� ũ�� j��°�� j+1��°�� �̵�
//    for(j=i-1; j>=0 && arr[j]>arr[i]; j--){
//		arr[j+1] = arr[j]; // ���ڵ��� ���������� �̵�
//    }
//
//    arr[j+1] = arr[i];
//  }
void swapElement(int* arr, int i,int j) {
	
	int temp= arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void insertElement(int*arr, int ele){
	
	while(ele>0) {
		if(arr[ele-1] > arr[ele])
			swapElement(arr, ele-1, ele);
		else
			break;
		ele--;
	}
}

	
