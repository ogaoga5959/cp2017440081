#include<stdio.h>

int main() {

	int i, j;

	for(int i=2; i<100; i++)
	{ 
		int c=0;  
		for(int j=1; j<=i; j++)
		{ 
			if(i%j==0) 
				c+=1;   
		}  
		if(c==2) 
			printf("100이하의 소수 : %d\n", i);   
	}            

	return 0;  
}