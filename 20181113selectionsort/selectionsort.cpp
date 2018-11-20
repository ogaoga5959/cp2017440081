#include <stdio.h>

	void printerArray(int* arr, int len) {  //앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.
	for(int index = 0; index < len; index++) {
	
	       printf("array[%d] = %d \n", index, arr[index]); // index를 변수를 집어 넣을 수 있다.

	}
	}
	

	//함수: findMinIndex()
	//입력: 배열(배열이름, 배열길이)
	//출력: 최소값의 인덱스
	int findMinIndex(int* arr, int length, int start) {
		int minIndex= start;
	
//		다음시간 퀴즈!!
		for(int i=start + 1; i<length; i++) {
		if( arr[minIndex] > arr[i])
	minIndex= i;
	}

		return minIndex;
	
	}



	//함수: findMin()
	//입력: 배열(배열이름, 배열길이)
	//출력: 배열 최소값
	int findMin(int* arr, int length, int start) {
		int min=arr[start];
    //다음시간 퀴즈!!
		for(int i=start +1; i<length; i++) {
		if( min > arr[i])
		{min=	arr[i];}
		}	
		return min;
	}
    //함수: swapElements()
	//입력: 배열, 두개의 인덱스
	//출력: 없음
	//부수효과: 배열의 두 인덱스 요소가 바뀐다.
	void swapElement(int* arr, int i, int j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	//함수: selectionSort()
	//입력: 배열
	//출력: 없음
	//부수효과: 배열이 정렬
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