//palindrome string with libraty function
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int d;
    printf("Please enter your input: ");
    gets(a);
    printf("Your input is : %s",a);
    strrev(a);
    strcpy(b,a);
    printf("Your reverse input is : %s",b);
    printf("\n");
    d=strcmp(a,b);
    
    if(d==0)

        printf("Your input is palindrome\n");
    else

        printf("Your input is not palindrome\n");












    return 0;
}
