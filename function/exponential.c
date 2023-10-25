#include<stdio.h>
void calculate(int b,int e)
{
    int i,result=1;
    for(i=1;i<=e;i++)
    {
        result= result*b;
    }
    printf("your result is %d",result);

    
}
int main()
{
    int base,exp;
    printf("Please enter base : ");
    scanf("%d",&base);
    printf("Please enter exp : ");
    scanf("%d",&exp);
    calculate(base,exp);


    









}