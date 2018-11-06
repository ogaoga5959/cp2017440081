#include <stdio.h>
//함수 printArray ()
//입력: 배열
//출력: 없음
//부수효과 : 화면에 모든 요소를 출력
void printArray(int arr[], int len) { //(배열이름[], 배열길이)

	for(int index = 0; index < len; index++) {
		printf("array[%d] = %d \n", index, arr[index]); // index를 변수를 집어 넣을 수 있다.

	}

}


int main() {



	int a[3] = {10, 20, 30};//배열 초기화 방법
	int* ptr;
	//배열의 이름만 사용하면 그 배열 첫 요소의 포인터값이 된다.
	ptr = a;//==> ptr = &a[0];
	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", *ptr);
	//포인터변수 이름을 배열 이름으로 사용할 수 있다.
	printf("a[0] = %d\n", ptr[0]);
	printf("a[0] = %d\n", ptr[1]);
	printf("a[0] = %d\n", ptr[2]);



	//printArray(a,3);
	return 0;
}