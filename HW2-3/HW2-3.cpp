#include <stdio.h>
int main() 
{
	int count, sum ;
  count =1;
  sum=0;
	while(count<=100) {

		if (count % 3 ==0) 
			
		{sum += count;}
		count++;
	}
	
	

	printf("1부터 100사이의 숫자 중 3의 배수들의 총합은 %d이다\n", sum);
	
	return 0;
}