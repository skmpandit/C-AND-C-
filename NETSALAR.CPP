#include<stdio.h>
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 float basic,da,hra,gross,pf,net;
 printf("\nEnter basic salary:-");
 scanf("%f",&basic);
 da=basic*0.55;
 hra=basic*0.15;
 gross=basic+da+hra;
 pf=gross*0.125;
 net=gross-pf;
 printf("\nNet salary=%f.2",net);
 getch();
}