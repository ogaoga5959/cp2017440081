#include <stdio.h>
int main(void)
{
    int n;
    int i;
	while(1) {
    printf("정수 입력:");
    scanf("%d", &n);
 if(n==0) break;
    printf("%d의 인수", n);
    for (i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
	}
    return 0;
}