#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 FILE *fp;
 char data[20];
 printf("Opening the file test.c in write mode");
 fp=fopen("test.c","w");
 if(fp==NULL)
 {
  printf("Could not open file test.c");
 }
 printf("\nEnter the some text from keyword");
 while(strlen(gets(data))>0)
 {
  fputs(data,fp);
  fputs("\n",fp);
 }
 printf("Closing the file text.c");
 fclose(fp);
 getch();
}