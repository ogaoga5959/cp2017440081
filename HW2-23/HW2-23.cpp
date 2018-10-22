#include <stdio.h>
int main(void) { 
	int x, y; 

	for(y = 0;y < 3; y++) 
	{ 
		for(x = 1;x < 7; x++)
		{
			
			if(x==-2*y+5)
				printf(" ");
			else printf("*");
		}
		printf("\n"); 
	} 
	return 0; 
}