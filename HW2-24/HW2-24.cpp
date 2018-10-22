#include <stdio.h>

int main(){
	int i=0, j=0;
	int n=0;
	printf("라인을 입력하시오: ");
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