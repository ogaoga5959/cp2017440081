
#include <stdio.h>

int main()
{
 int num;
    int total;

 while(1)
 {
  printf("���� ������ �Է��Ͻÿ� : ");
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
