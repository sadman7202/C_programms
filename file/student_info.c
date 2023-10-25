#include<stdio.h>
int main()
{   
    char name[50];
    int age,phone,num,i;
    FILE *file;
    file= fopen("student.txt","a");
    if (file==NULL)
    {
      printf("File doesnt exist");
    }
    else
    {
        printf("file is opened\n");
        printf("Enter how many students: ");
        scanf("%d",&num);
        for ( i = 1; i <=num; i++)
        {
            printf("Enter student %d name ",i);
            scanf("%s",&name);
            printf("\nEnter student %d age ",i);
            scanf("%d",&age);
            printf("\nEnter student %d phone ",i);
            scanf("%d",&phone);
            fprintf(file,"\n%s\t\t%d\t%d",name,age,phone);
            
        }
        printf("Written successfully");
             




        fclose(file);
    }
    










    return 0;

}