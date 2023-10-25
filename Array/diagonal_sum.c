#include<stdio.h>
int main()
{
    int A[10][10],i,j,k,row,col,upersum=0,lowersum=0;
    printf("Please enter same number of row and coloum: ");
    scanf("%d %d",&row,&col);
    printf("\n\nEnter your matrix: \n");
//inputing first matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Matrix [%d] [%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        
    }
//printing matrix 
    printf("Your Matrix is : \n\n");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
//diagonal elemenmts
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<j)
            {
                upersum = upersum  + A[i][j];                               
            }   
            if(i>j)
            {
                lowersum = lowersum + A[i][j]; 
            }
            
        }
    }
    printf("Your diagonal uper  sum is : %d\n",upersum);
    printf("Your diagonal lower sum is : %d\n",lowersum);




















    return 0;
}