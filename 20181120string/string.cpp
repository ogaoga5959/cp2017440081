#include <stdio.h>
#include <string.h>


	void printArray(char* arr, int len) { //(�迭�̸�[], �迭����)

	for(int index = 0; index < len; index++) {
		printf("array[%d] = %c \n", index, arr[index]); // index�� ������ ���� ���� �� �ִ�.

	}

}
int main() {


	char c; //character(����)��
	c = 'A'; //==> c=65;
	printf("C = %d\n", c);//c�� �ƽ�Ű�ڵ��� 65�� ����Ʈ ��.
	printf("C = %c\n", c);//%c�� character(����)�� ǥ���϶�� ��

	
	
	char a[] = {'h', 'e', 'l', 'l', 'o'};
	printArray(a,5);


	//���ڿ�(STRING)
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