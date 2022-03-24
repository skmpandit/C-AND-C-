#include<stdio.h>
#include<conio.h>
void main()
{
 float no,fp,prf,fde=0,ans,ic=1;
 int ip,ir,ide=0,ib=1,i=1,pri,set=0;
 clrscr();
 printf("Enter the number:-");
 scanf("%f",&no);
 ip=no;
 fp=no-ip;
 printf("fp=%f\n",fp);
 while(ip!=0)
 {
   ir=ip%10;
   if((ir<0)||(ir>1))
   {
    set=1;
    break;
   }
   ip=ip%10;
   ide=ide+(ir*ib);
   ib=ib*2;
 }
 while((fp!=0)&&(i<5))
 {
  pri=(fp*10);
  prf=(fp*10);
  fp=prf-pri;
  i++;
  printf("fpnext=%f",fp);
  if((pri<0)||(pri>1))
  {
   printf("pri=%d\nprf=%f",pri,prf);
   ic=ic/2;
   fde=fde+(pri*ic);
  }
  ans=ide+fde;
  if(set==1)
  {
   printf("Wrong input %f is not a binary number",no);
  }
  else
  {
   printf("The equivalent binary number is %f ",ans);
  }
 }
 getch();
}