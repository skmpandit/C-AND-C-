#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp;
 char name[30];
 int roll;
 int marks;
 fp=fopen("record.txt","r");
 if(fp==NULL)
 {
  printf("Error opening file\n");
  exit(1);
 }
 printf("Testing fscanf() function:-\n\n");
 printf("Name=\t\tRoll\t\tMarks\n");
 while(fscanf(fp,"Name:%s\tRoll:%d\tMarks:%d\n",name,&roll,&marks)!=EOF)
 {
  printf("%s\t\t%d\t\t%d\t",name,roll,marks);
 }
 fclose(fp);
 getch();
}