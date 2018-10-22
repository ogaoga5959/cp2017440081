#include<stdio.h>
int main () {

	int n, i=7;
	int sum=0;
	printf("7이상의 숫자를 하나 입력하시오: ");
	scanf("%d", &n);

	
	while( n>= 7)
	{
	for(i=7; n>= i; i++)
		{sum += i;}
		
	printf("7부터 %d까지의 정수들의 합은 %d입니다\n", n, sum); break;
	}
	printf("입력하신 숫자가 7보다 작습니다\n");
	return 0;
}
