#include<stdio.h>
#include<conio.h>
void main()
{
 int n=1,num;
 clrscr();
 printf("Enter the last term :-");
 scanf("%d",&num);
 label:
       printf("%d ",n);
       n++;
       if(n<=num)
       {
	goto label;
       }
       getch();
}