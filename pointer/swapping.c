#include<stdio.h>
//pointer function for swap
void swapping(int *ptr1,int *ptr2)
{
    int temp;
    
    temp=*ptr1;
    *ptr1=*ptr2;
    temp=*ptr2;
    printf("After swapping x=%d y=%d",*ptr2,*ptr1);





}
int main()
{
    int x=10,y=45,a[5]={45,87,90,56,43},*rtf,i;
    printf("Before swapping x=%d y=%d",x,y);
    printf("\n\n\n");
    swapping(&x,&y);
    rtf=&a[0];
    printf("\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",*rtf);
        rtf++;
    }
    

    









    
}