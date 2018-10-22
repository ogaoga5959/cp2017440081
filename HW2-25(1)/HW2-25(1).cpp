#include <stdio.h>
int main(void) { 
	int x, y; 

	for(y = 1;y < 12; y++) 
	{ 

		if(y<=5)
		{	
			for(x = 1;x <= (-2)*y+13; x++)
				printf("*");
		}
		else if(y > 5)
		{
			for(x=1; x <= 2*y-11; x++)
				printf("*");
		}

		printf("\n"); 
	} 
	return 0; 
}