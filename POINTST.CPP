#include<stdio.h>
#include<conio.h>
struct person
{
 int age;
 int weight;
};
void main()
{
 struct person *personptr, person1;
 personptr = &person1;
 printf("Enter the age:-");
 scanf("%d",&personptr->age);
 printf("Enter the weight:-");
 scanf("%d",&personptr->weight);
 printf("Displaying:-\n");
 printf("Age=%d\n",personptr->age);
 printf("Weight=%d",personptr->weight);
 getch();
}