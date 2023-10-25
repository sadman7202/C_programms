#include<stdio.h>
int fact(int x)
{
    int i;
    if (x==1)
        return 1;
    else
        return x * fact(x-1);
    

}
int main()
{
    int result,n;
    printf("Please enter your number: ");
    scanf("%d",&n);
    result=fact(n);
    printf("Your result is : %d\n",result);
    

}