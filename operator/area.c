//Program for Circle redius
#include<stdio.h>
int main()
{
    double a,b,c,D,x1,x2;
    printf("Please enter your values : ");
    scanf("%lf %lf %lf",&a,&b,&c);
    D=sqrt(b*b-4*a*c);
    x1=(-b+D)/(2*a);
    x2=(-b-D)/(2*a);
    printf("Your Ans is : %lf %lf\n",x1,x2);









}
     int main()
{
    char c;
    printf("Please enter any letter : ");
    scanf("%c",&c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        printf("The letter is Vowel\n");
    else
        printf("The letter is constant\n");
}
