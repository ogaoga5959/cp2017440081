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
	
	

	printf("1���� 100������ ���� �� 3�� ������� ������ %d�̴�\n", sum);
	
	return 0;
}