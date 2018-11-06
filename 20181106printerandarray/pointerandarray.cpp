#include <stdio.h>
//PrintArray()
//입력: 배열
//출력: 없음
//부수효과: 화면에 배열의 값을 출력
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