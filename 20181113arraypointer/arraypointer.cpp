#include <stdio.h>
//함수 printArray ()
//입력: 배열
//출력: 없음
//부수효과 : 화면에 모든 요소를 출력
/*void printArray(int arr[], int len) {*/ //(배열이름[], 배열길이)
	void printerArray(int* arr, int len) {  //앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.
	for(int index = 0; index < len; index++) {
	
		printf("array[%d] = %d \n", index, arr[index]); // index를 변수를 집어 넣을 수 있다.

	}

}


int main() {



	int a[3] = {10, 20, 30};//배열 초기화 방법
	int* ptr;
	//배열의 이름만 사용하면 그 배열 첫 요소의 포인터값이 된다.
	printerArray(a, 3);

	
	return 0;
}