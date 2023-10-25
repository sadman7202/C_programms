#include<stdio.h>
#include<string.h>
struct Person
{
    int age;
    char name[50];
    float salary;
};
void display(struct Person p)
{
    printf("Person name: %s",p.name);
    printf("\n");
    printf("Person age: %d\n",p.age);
    printf("Person salary: %f\n",p.salary);
}

int main()
{
struct Person person1,person2;
person1.age=57;
person1.salary=25000;
strcpy(person1.name,"Sadik Jafar");
display(person1);
person2.age=47;
person2.salary=4790000;
strcpy(person2.name,"Atik Iqbal");
display(person2);




}