#include <stdio.h>
#include <string.h>


	void printArray(char* arr, int len) { //(배열이름[], 배열길이)

	for(int index = 0; index < len; index++) {
		printf("array[%d] = %c \n", index, arr[index]); // index를 변수를 집어 넣을 수 있다.

	}

}
int main() {


	char c; //character(문자)형
	c = 'A'; //==> c=65;
	printf("C = %d\n", c);//c의 아스키코드인 65가 프린트 됨.
	printf("C = %c\n", c);//%c는 character(문자)로 표시하라는 뜻

	
	
	char a[] = {'h', 'e', 'l', 'l', 'o'};
	printArray(a,5);


	//문자열(STRING)
	char b[] = "hello"; ///==> char b[] = {'h', 'e', 'l', 'l', 'o', \0};
		printf("%s \n", b);
			
		printf("the length of the string is %d\n", strlen(b)); 

		char str1[50] = "hello";
		char* str2 = " world";
		strcat(str1, str2);
		printf("%s \n", str1);
		strcpy(str1, str2);
		printf("%s \n", str1);


return 0;

}