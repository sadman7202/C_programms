#include<stdio.h>
int maximum(int n[],int x)
{
    int i,max=n[0];
    for(i=0;i<x;i++)
    {
        if(max<n[i])
        max=n[i];
    }
    return max;


}
int main()
{
    int num[20],maxvalue,n,i;
    printf("Please enter how many numbers: ");
    scanf("%d",&n);
    printf("enter your numbers: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);

    }
    printf("Your numbers are: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",num[i]);
    }
    maxvalue= maximum(num,n);
    printf("Your maximum value is : %d\n",maxvalue);



    











    
}