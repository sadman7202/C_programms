#include<stdio.h>
#include<string.h>
int main()
{
    char name[50]="Sadman Sakib";
    int length=strlen(name),i;
    FILE *file;
    file=fopen("textfile.txt","w");
    if(file==NULL)
    {
        printf("File doesnt exist");

    }
    else
    {
        printf("File has opened\n");
        for(i=0;i<length;i++)
        {
            fputc(name[i],file);
        }
        printf("Written succesfully");
        fclose(file);

    }
    

    
    
    










    return 0;
}

