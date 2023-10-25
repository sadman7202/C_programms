#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    int age;
    
    FILE *file;
    file=fopen("textfile.txt","a");
    if(file==NULL)
    {
        printf("File doesnt exist");

    }
    else
    {
        printf("File has opened\n");
        printf("Enter your name: ");
        gets(name);
        printf("Enter your age: ");
        scanf("%d",&age);
        fprintf(file,"Name= %s Age=%d\n",name,age);
        printf("Written succesfully");
        fclose(file);

    }
    

    
    
    










    return 0;
}

