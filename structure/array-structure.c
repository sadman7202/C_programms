#include<stdio.h>
#include<string.h>
struct Person       
{
    char name[50];
    int age;
    float salary;
    

};



int main()
{
    int n,i;
    struct Person person[12];
    printf("Please enter how many person: ");
    scanf("%d",&n);
    

    for ( i = 0; i < n; i++)
    {
        printf("Enter person %d information: \n",i+1);
        printf("\n"); 
        printf("Enter person name: ");
        scanf("%s",&person[i].name);
        printf("Enter age: ");
        scanf("%d",&person[i].age);
        printf("Enter salary: ");
        scanf("%f",&person[i].salary);
    }
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        
        printf("Person %d name: %s",i+1,person[i].name);
        printf("\n");
        printf("Person %d age: %d",i+1,person[i].age);
    
        printf("\n");
        
        printf("Person %d salary : %2f \n",i+1,person[i].salary);
        printf("\n\n\n");
        
    }

    


    








    
}