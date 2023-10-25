#include<stdio.h>
struct Person
{
  int age;
  float salary;

};

int main()
{
 struct Person person1,person2;
 printf("Enter Age of person 1: ");
 scanf("%d",&person1.age);
 printf("Enter salary of person 1 :");
 scanf("%f",&person1.salary);

 printf("Person 1 age is : %d\n",person1.age);
 printf("person 1 salary is : %.2f\n",person1.salary);
 printf("\n\n\n");
 printf("Enter Age of person 2: ");
 scanf("%d",&person2.age);
 printf("Enter salary of person 2 :");
 scanf("%f",&person2.salary);

 printf("Person 1 age is : %d\n",person2.age);
 printf("person 1 salary is : %.2f\n",person2.salary);
 
 if (person1.age==person2.age && person1.salary==person2.salary)
  printf("Person 1 and person 2 are equal");
else
  printf("Person 1 and person 2 are not equal");

 



}
    







