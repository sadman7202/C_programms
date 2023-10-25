#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    int length,i;
    
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
        fputs(name,file);
        fputs("\n",file);
        printf("Written succesfully");
        fclose(file);

    }
    

    
    
    










    return 0;
}

