#include<stdio.h>
int main()
{
  int i,j,a[3][4],b[3][4];
  printf("Please Enter A matrix: \n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<4;j++)
      {


      printf("A[%d][%d]= ",i,j);
      scanf("%d",&a[i][j]);
      }
      printf("\n");

  }
  printf("Matrix A= ");
  for(i=0;i<3;i++)
  {
      printf("\t");
      for(j=0;j<4;j++)
      {
        printf("%d",a[i][j]);



      }
      printf("\n");

  }
  printf("Please Enter B matrix: \n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<4;j++)
      {


      printf("A[%d][%d]= ",i,j);
      scanf("%d",&a[i][j]);
      }
      printf("\n");

  }
  printf("Matrix B= ");
  for(i=0;i<3;i++)
  {
      printf("\t");
      for(j=0;j<4;j++)
      {
        printf("%d",a[i][j]);



      }
      printf("\n");

  }









    return 0;
}

