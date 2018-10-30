 #include <stdio.h>
 //함수 printArray 
 //입력: 배열
 //출력: 없음
 //부수효과 : 화면에 모든 요소를 출력
 void printArray(int arr[], int length) { //(배열이름[], 배열길이)
	 int count = 0;
	while(count < length) {
		printf("a[%d] = %d\n", count, arr[count]); // index를 변수를 집어 넣을 수 있다.
		count++;
	}

 }


int main() {
	//======이 위는 당분간 무시
	int len = 4;
	//배열선언
	//1. 배열의 이름 : a
	//2. 요소의 자료형: int
	//3. 배열의 길이: 4
	//int a[4];//배열 선언
	//a[0] = 20;
	//a[1] = 200;
	//a[2] = 2000;
	//a[3] = 20000;
	

	int a[4] = {2, 20, 200, 2000};//배열 초기화 방법
	int arr[] = {3, 30, 300}; // 길이 3의 배열 생성
    printArray(a,len); //배열을 매개변수로 (배열의 이름 a, 배열의 길이 len)

    ///배열을 매개변수로 함수에 던지는 방법


	//======이 아래도 당분간 무시
	return 0;
}