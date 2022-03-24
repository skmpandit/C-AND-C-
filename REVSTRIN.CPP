#include<stdio.h>
#include<conio.h>
#define MAX 100
void main()
{
 char str[MAX],reverse[MAX];
 int i,strindex,revindex,len;
 printf("Enter the any string:-");
 gets(str);
 i=0;
 while(str[i]!='\0')i++;
 len=i;
 revindex=0;
 strindex=len-1;
 while(strindex>=0)
 {
  reverse[revindex]=str[strindex];
  strindex--;
  revindex++;
 }
 reverse[revindex]='\0';
 printf("\nOriginal string=%s\n",str);
 printf("Reverse string=%s",reverse);
 getch();
}