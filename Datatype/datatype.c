//program about datatype
#include<stdio.h>
int main()
{
  int num1=10;
  int num2=30;
  float num3=56.5;
  char cha='b';
  printf("Number is %d\n",num1);
  printf("Number is %d\n",num2);
  printf("Number are %d,%d\n",num1,num2);
  printf("float number is %f\n",num3);
  printf("Char is %c\n",cha);
  int num4;
  int num5;
  printf("Please enter a number : ");
  scanf("%d",&num4);
  printf("You have pressed %d\n",num4);
  printf("Please enter two number : %d,%d",num4,num5);
  scanf("%d,%d",&num4,&num5);
  printf("You have pressed : %d,%d\n",num4,num5);
  printf("The size of : %d\n",sizeof(num4));



  return 0;

}
