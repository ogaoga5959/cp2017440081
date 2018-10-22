#include<stdio.h>
int main() {
	int month, day;
	
 printf("몇 월?: ");
 scanf("%d", &month);
	 printf("몇 일? : ");
 scanf("%d", &day);
 switch(month)
 {
 case(1):
	 printf("1월 1일 부터 총 일 수는 %d입니다.\n", day);
	 break;
	 case(2):
	 printf("1월 1일 부터 총 일 수는 %d입니다.\n", day+31);
	  break;
	 case(3):
	 printf("1월 1일 부터 총 일 수는 %d입니다.\n", day+59);
	   break;
	 case(4):
	 printf("1월 1일 부터 총 일 수는 %d입니다.\n", day+90);
	  break;
	 case(5):
	 printf("1월 1일 부터 총 일 수는 %d입니다.\n", day+120);
	   break;
	 case(6):
	 printf("1월 1일 부터 총 일 수는 %d입니다.\n", day+151);
	  break;
	 case(7):
	 printf("1월 1일 부터 총 일 수는 %d입니다.\n", day+181);
	  break;
	 case(8):
	 printf("1월 1일 부터 총 일 수는 %d입니다.\n", day+212);
	  break;
	 case(9):
	 printf("1월 1일 부터 총 일 수는 %d입니다.\n", day+243);
	  break;
	 case(10):
	 printf("1월 1일 부터 총 일 수는 %d입니다.\n", day+273);
	  break;
	 case(11):
	 printf("1월 1일 부터 총 일 수는 %d입니다.\n", day+304);
	  break;
	 case(12):
	 printf("1월 1일 부터 총 일 수는 %d입니다.\n", day+334);
	  break;
 }
 return 0;
}
