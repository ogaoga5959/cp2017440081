#include <stdio.h>
int main() {
 int a = 10;
 int* ptr;
 ptr = &a; // &a;에서 & : Ampersand이며 "address of" a, 변수 a의 주소(변수 a를 위해 할당한 메모리의 첫번째 주소)
 *ptr = 20; // *ptr = data of ptr, 포인터변수 ptr이 가리키는곳의 데이터
 // c에서 pointer의 두가지 의미 : 1. 메모리 주소, 2. 메모리 주소를 시작으로 하는 값의 자료형
 
 printf("a = %d\n", a); 


	return 0;
}