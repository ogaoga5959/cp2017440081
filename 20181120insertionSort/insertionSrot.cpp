#include <stdio.h>

void selectionSort(int* arr, int length) {
    for(int start = 1; start<length; start++){
		insertElement(arr, start);

	}
	}

//void insertElement(int* arr, int length) {
//	int i, j; 
//
//    // 현재 정렬된 배열은 i-1까지이므로 i-1번째부터 역순으로 조사한다.
//    // j 값은 음수가 아니어야 되고
//    // key 값보다 정렬된 배열에 있는 값이 크면 j번째를 j+1번째로 이동
//    for(j=i-1; j>=0 && arr[j]>arr[i]; j--){
//		arr[j+1] = arr[j]; // 레코드의 오른쪽으로 이동
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

	
