#include<stdio.h>
int main() {
	int month, day;
	
 printf("�� ��?: ");
 scanf("%d", &month);
	 printf("�� ��? : ");
 scanf("%d", &day);
 switch(month)
 {
 case(1):
	 printf("1�� 1�� ���� �� �� ���� %d�Դϴ�.\n", day);
	 break;
	 case(2):
	 printf("1�� 1�� ���� �� �� ���� %d�Դϴ�.\n", day+31);
	  break;
	 case(3):
	 printf("1�� 1�� ���� �� �� ���� %d�Դϴ�.\n", day+59);
	   break;
	 case(4):
	 printf("1�� 1�� ���� �� �� ���� %d�Դϴ�.\n", day+90);
	  break;
	 case(5):
	 printf("1�� 1�� ���� �� �� ���� %d�Դϴ�.\n", day+120);
	   break;
	 case(6):
	 printf("1�� 1�� ���� �� �� ���� %d�Դϴ�.\n", day+151);
	  break;
	 case(7):
	 printf("1�� 1�� ���� �� �� ���� %d�Դϴ�.\n", day+181);
	  break;
	 case(8):
	 printf("1�� 1�� ���� �� �� ���� %d�Դϴ�.\n", day+212);
	  break;
	 case(9):
	 printf("1�� 1�� ���� �� �� ���� %d�Դϴ�.\n", day+243);
	  break;
	 case(10):
	 printf("1�� 1�� ���� �� �� ���� %d�Դϴ�.\n", day+273);
	  break;
	 case(11):
	 printf("1�� 1�� ���� �� �� ���� %d�Դϴ�.\n", day+304);
	  break;
	 case(12):
	 printf("1�� 1�� ���� �� �� ���� %d�Դϴ�.\n", day+334);
	  break;
 }
 return 0;
}
