#include <stdio.h>
int main(void)
{
    int n;
    int i;
    printf("���� �Է�:");
    scanf("%d", &n);
 
    printf("%d�� �μ�\n", n);
    for (i = 2; i < n; i++)
    {
        if (n%i == 0)//����� �������� 0�� ��
        {
            printf("%d ", i);
        }
    }
    printf("\n");
 
    return 0;
}