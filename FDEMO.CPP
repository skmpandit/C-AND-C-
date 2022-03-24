#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *demo;
 demo=fopen("demo_file.txt","w+");
 fprintf(demo,"%s %s %s","welcome","to","programing");
 fclose(demo);
 getch();
}