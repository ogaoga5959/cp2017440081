
#include <stdio.h>

int main()
{
 int num;
    int total;

 while(1)
 {
  printf("양의 정수를 입력하시오 : ");
     scanf("%d" , &num);
 
  if(num>0 && num!=0)
  {
   total = num * 2;
   printf("%d\n" , total);
   
  break; 
  }

  else 
   printf("error\n");
 }
 
}
