#include <stdio.h>
int main()
{
int x, sum;
x =1;
sum = 0;
do
{
if(x%3==0)
{sum = sum +x;}
x++;
}
while(x<=100);
printf("1���� 100������ ��� 3�ǹ���� ���� %d�Դϴ�.\n", sum);
return 0;
}