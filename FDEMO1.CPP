#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *demo;
 int display;
 demo=fopen("demo_file.txt","r");
 while(1)
 {
 display=fgetc(demo);
 if(feof(demo))
 {
 break;
 }
 printf("%c",display);
 }
 fclose(demo);
 getch();
}