#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();
  printf("Enter the number:-");
  scanf("%d",&n);
  if(n%2==0)
  {
   printf("%d is even number",n);
  }
  else
  {
    printf("%d is odd number",n);
  }
  getch();
}