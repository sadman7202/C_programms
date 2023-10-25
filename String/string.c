#include<stdio.h>
#include<string.h>
int main()
{
//input string
    char s1[20],s2[20]=" lives in mirpur",rs[20];
    int i=0,len,d;
    printf("Please enter your Full name: ");
    gets(s1);
    printf("Your name is : %s\n",s1);
    
//string length
      for(int i=0;i<s1[i];i++)
    {
        printf("%c\n",s1[i]);
    }
    while (s1[i]!='\0')
    {
      i++;
      len++;
    }
    printf("Length is : %d\n",len); 
    
    
//string concatantion
strcat(s1,s2);
printf("%s\n",s1);
//string compare(not applicable for this code xD)
  d= strcmp(s1,s2);
  if(d==0)
    printf("Strings are equal \n");
  else
    printf("Strings are not equal\n");
//reverseing string
strrev(s1);
printf("Your reverse name is : %s",s1);






    
    
   













    return 0;
    
}