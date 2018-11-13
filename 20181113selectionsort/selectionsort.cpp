#include <stdio.h>

	void printerArray(int* arr, int len) {  //앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.
	for(int index = 0; index < len; index++) {
	
		printf("array[%d] = %d \n", index, arr[index]); // index를 변수를 집어 넣을 수 있다.

	}
	}
	

	//함수: findMinIndex()
	//입력: 배열(배열이름, 배열길이)
	//출력: 최소값의 인덱스
	int findMinIndex(int* arr, int length) {
	    int minIndex=0;
		
//		다음시간 퀴즈!!
		for(int count=1; count<length; count++) 
		if( minIndex > arr[count])
			minIndex= count;
		

		return minIndex;
	
	}



	//함수: findMin()
	//입력: 배열(배열이름, 배열길이)
	//출력: 배열 최소값
	int findMin(int* arr, int length) {
		int min=arr[0];
//		다음시간 퀴즈!!
		for(int count=1; count<length; count++) {
		if( min > arr[count])
			min=	arr[count];
		}
		return min;
	}
		//함수: swapElements()
	//입력: 배열, 두개의 인덱스
	//출력: 없음
	//부수효과: 배열의 두 인덱스 요소가 바뀐다.
	void swapElement(int* arr, int i, int j) {
		int temp;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	//함수: selectionSort()
	//입력: 배열
	//출력: 없음
	//부수효과: 배열이 정렬
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