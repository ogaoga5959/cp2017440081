#include <stdio.h>
int main(void)
{
    int n;
    int i;
    printf("정수 입력:");
    scanf("%d", &n);
 
    printf("%d의 인수\n", n);
    for (i = 2; i < n; i++)
    {
        if (n%i == 0)//나누어서 나머지가 0일 때
        {
            printf("%d ", i);
        }
    }
    printf("\n");
 
    return 0;
}