#include <stdio.h>
int main()
{
int x, sum;
sum = 0;
for(x=1;x<=100;x++)
{
if (x%3==0)
    sum = sum + x;
}
printf("1���� 100������ ��� 3�ǹ���� ���� %d�Դϴ�.\n", sum);
return 0;
}