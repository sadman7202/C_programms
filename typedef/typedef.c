#include<stdio.h>
struct book
{
    char name[50];
    int price;
};

int main()
{
    typedef char letter;
    letter ch='A';
    letter ch1='B';
    printf("%c",ch);
    printf("%c",ch1);
    typedef struct book Books;
    Books b={"Amar bangla",560};
    printf("\n");
    printf("name: %s price : %d\n",b.name,b.price);
 



    return 0;
}