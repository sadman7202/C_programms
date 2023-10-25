#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],R[10][10],r1,r2,c1,c2,i,j,k,sum=0;
    printf("Please enter Matrix A Coloum and Row" );
    scanf("%d %d",&r1,&c1);
    printf("Please enter Matrix B Coloum and Row" );
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("Dimension Error ! ! ");
         printf("Please enter Matrix A Coloum and Row \n");
        scanf("%d %d",&r1,&c1);
        printf("Please enter Matrix B Coloum and Row \n");
        scanf("%d %d",&r2,&c2);
    }
    //input for first matrix 
    printf("\nEnter Elements Of First Metrix : \n");
    for(i=0;i<r1;i++)
    {

        for(j=0;j<c1;j++)
        {
            printf("First Metrix [%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //printing first matrix
    printf("\n\nFirst Matrix:\n");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c1;j++)
        {
        printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
        
    //input for second matrix
    
    printf("\nEnter Elements Of Second Metrix : \n");
    for(i=0;i<r2;i++)
    {

        for(j=0;j<c2;j++)
        {
            printf("Second Metrix [%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    
    //printing second matrix
     printf("\n\nSecond Matrix:\n");
    for(i=0;i<r2;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
        printf("%d  ",B[i][j]);
        }
        printf("\n");
        
    }

    //multiplying metrix 
    for(i=0;i<r1;i++)
   {
         for(j=0;j<c2;j++)
    {
         for(k=0;k<c1;k++)
         {
           sum = sum + A[i][k]*B[k][j];
         }


       R[i][j] = sum;
        sum = 0;
    }
   }
    //printing result metrix
    printf("\n\nResult Matrix:\n");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
        printf("%d  ",R[i][j]);
        }
        printf("\n");
        
    }



















    return 0;
}

        
    

    
















