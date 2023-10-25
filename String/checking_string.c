#include<stdio.h>
#include<string.h>
int main()
{
    char a[25],cha;
    int i,cons,vowel,digit,word,other,small,capital;
    i=cons=vowel=digit=word=other=0;
    printf("Enter your string: ");
    gets(a);
    while((cha=a[i])!='\0')
    {
        if(cha=='a'||cha=='e'||cha=='i'||cha=='o'||cha=='u'
        ||cha=='A'||cha=='E'||cha=='I'||cha=='O'||cha=='U')
        vowel++;
        else if(cha>='a' && cha<='z')
        cons++;
        else if(cha>='0' && cha<='9')
        digit++;
        else if (cha=' ')
        word++;
        
        else 
        other++;

        i++;
    

    }
    
    word++;
    printf("number of vowels: %d\n",vowel);
    printf("number of consonents: %d\n",cons);
    printf("number of words: %d\n",word);
    printf("number of digits: %d\n",digit);
    printf("number of others: %d",other);



















    return 0;
}