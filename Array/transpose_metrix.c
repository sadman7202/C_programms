#include<stdio.h>
int main()
{
    int A[10][10],T[10][10],row,col,i,j,k;
    printf("Please enter Row and Coloum of Metrix: ");
    scanf("%d %d",&row,&col);
    printf("Please enter your matrix : \n");
//inputing matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("[%d] [%d]",i,j);
            scanf("%d",&A[i][j]);
        }
        
    }
//printing matrix
    printf("\n\n Matrix:\n");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
        printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
//transposing matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            T[j][i]=A[i][j];
        }
    }
//printing Transpose matrix
printf("\n\n Transpose Matrix:\n");
    for(i=0;i<col;i++)
    {
        printf("\t");
        for(j=0;j<row;j++)
        {
        printf("%d  ",T[j][i]);
        }
        printf("\n");
    }






















    return 0;
}