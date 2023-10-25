#include<stdio.h>
double area(double b,double h)
{
    return 0.5*b*h;


}
int main()
{
    double base,height;
    printf("Enter base : ");
    scanf("%lf",&base);
    printf("Enter height: ");
    scanf("%lf",&height);
    printf("your area is : %.lf",area(base,height));





}