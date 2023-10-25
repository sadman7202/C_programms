//first function programm
#include<stdio.h>
//function for sum
void sum(int a,int b)
{
 printf("your sum is : %d",a+b);
}
//function for square
int sqr(int a)
{
    return a*a;
}


int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    sum(num1,num2);
    printf("\nsquare of first number is %d",sqr(num1));
    printf("\nsquare of second number is %d",sqr(num2));
















}