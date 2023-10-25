#include<stdio.h>
int main()
{
    int choice;
    float temp,ctemp;


    printf("Temperature conversion menu : \n");
    printf("1.Celsius to Fahrenheit  \n");
    printf("2.Fahrenheit to Celsius  \n");
    printf("Please Enter your choice : ");
    scanf("%d",&choice);

    switch (choice)
    {


    case 1:
    {
        printf("Please enter your Fahrenheit temperature : ");
        scanf("%f",&temp);
        ctemp =9/5*(temp + 32);
        printf("Your Celsius temperature is : %f\n",ctemp);
        break;
    }
    case 2:
    {

        printf("Please enter your Celsius temperature : ");
        scanf("%f",&temp);
        ctemp=5/9*(temp - 32);
        printf("Your Fahrenheit temperature is : %f\n",ctemp);
        break;
    }
    }









    return 0;


}
