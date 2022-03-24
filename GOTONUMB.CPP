#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void checkevenornot(int num)
{
 if(num%2==0)
 {
  goto even;
 }
 else
 {
  goto odd;
 }
 even:
      printf("%d is even number",num);
      return;
 odd:
     printf("%d is odd number",num);
}
int main()
{
 int num=27;
 clrscr();
 checkevenornot(num);
 getch();
}