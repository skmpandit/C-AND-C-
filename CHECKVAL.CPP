#include<stdio.h>                                                  bbhhfgfgchhgh
#include<conio.h>
void main()
{
 char ch;
 clrscr();
 printf("Enter the characters:-");
 scanf("%c",ch);
 if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
 {
  printf("%c is vawel\n",ch);
 }
 else
 {
  printf("%c is consonent",ch);
 }
 getch();
}