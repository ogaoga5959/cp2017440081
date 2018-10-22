#include<stdio.h>

int main() {
	int i, j, n, sum=0;

	printf("숫자를 입력하시오 : ");
	scanf("%d", &n);

	for(int i=2; i<=n; i++)
	{ 
		int c=0;  
		for(j=1; j<=i; j++)
		{ 
			if(i%j==0) 
				c+=1;   
		}  
		if(c==2) 
			sum+= i;   
		
	}         
	printf("%d 이하의 소수들의 합은 %d입니다\n", n,sum);
	return 0;
}