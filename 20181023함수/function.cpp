#include <stdio.h>


int gVar = 100; // 전역변수(global variable)
//함수 sum()
//입력: 두 정수
//출력: 두 정수의 합
//부수효과 : 없음
int sum(int a, int b) {   //함수 선언    1, 함수의 이름(sum)                        
	int c;                          //   2. 매개변수의 갯수(2)
	c = a + b;                     //  3. 각 매개 변수의 자료형(int, int)
                                   //    4. 반환값의 자료형(반환형)	                  이 4가지가 함수호출하기 위해 필요한 정보
	return c;             //함수 본체
}                          //함수 선언 + 함수 본체 = 함수 정의

//함수: goodPrint()
//입력: 없음
//출력: 없음
//부수효과: 화면에 good 출력
void goodPrint(){
	printf("good\n");
}

int main (){

	int x = 10, y = 20, z;
	z = sum(x,y);//함수 호출
	printf("z=%d\n, x = %d\n", z, x);
	goodPrint();
	return 0;
}