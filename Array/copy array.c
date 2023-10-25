#include<stdio.h>
int main()
{
   int a1[10],a2[10],i,n;
   printf("Please enter how many number : ");
   scanf("%d",&n);
   printf("Please enter numbers : ");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a1[i]);
   }
   printf("Array 1 is : ");
   for(i=0;i<n;i++)
   {
       printf("%d ",a1[i]);
   }
   for(i=0;i<n;i++)
   {
       a2[i]=a1[i];
   }
   printf("\nArray 2 is : ");
   for(i=0;i<n;i++)
   {
       printf("%d ",a2[i]);
   }


















    return 0;
}
