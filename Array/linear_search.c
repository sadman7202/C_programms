#include<stdio.h>
int main()
{
    int num[7]= {10,2,45,69,15,36,78};
    int value,i,pos=-1;
    printf("Please enter your number : ");
    scanf("%d",&value);

    for(i=0; i<7; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
        }
        break;
    }

        printf("Your item is at : %d",pos);


















    return 0;
}
