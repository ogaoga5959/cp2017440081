#include <stdio.h>
int main(void)
{
    int n;
    int i;
	while(1) {
    printf("���� �Է�:");
    scanf("%d", &n);
 if(n==0) break;
    printf("%d�� �μ�", n);
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