#include<stdio.h>

int main()
{
    char ch[50];
    
    
    FILE *file;
    file=fopen("textfile.txt","r");
    if(file==NULL)
    {
        printf("File doesnt exist"); 

    }
    else
    {
        printf("File has opened\n");
        while (!feof(file))
        {
            fscanf(file,"%s",&ch);
            printf("%s",ch);
            
        }
        
        
        
        fclose(file);

    }
    

    
    
    










    return 0;
}

