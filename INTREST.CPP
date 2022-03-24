#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float p,r,t,ci;
 clrscr();
 printf("Enter the pricipal amount:-");
 scanf("%f",&p);
 printf("Enter the rate of intrest:-");
 scanf("%f",&r);
 printf("Enter the time:-");
 scanf("%f",&t);
 ci=p*pow((1+r/100),t);
 printf("compound interest is %f",ci);
 getch();
}