#include <stdio.h>

int main(){
	int i=0, j=0;
	int n=0;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);


		while(i<n) {

			while(j<i)
			{
				printf("*");
				j++;
			}
			j=0;
			printf("* \n");
			i++;
		}
		return 0;
}