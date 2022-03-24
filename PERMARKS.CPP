 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
  int m1,m2,m3,m4,m5,total;
  float per;
  clrscr();
  printf("Enter the five subject marks:-\n");
  scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
  total=m1+m2+m3+m4+m5;
  printf("total number is %d\n",total);
  per=total*100/500;
  if(per>=90)
  {
   printf("grade O and percentage is %f",per);
  }
  else if(per>=80 && per<90)
  {
    printf("grade E and percentage is %f",per);
  }
  else if(per>=70 && per<80)
  {
   printf("grade A and percentage is %f",per);
  }
  else if(per>=60 && per<70)
  {
    printf("grade B and percentage is %f",per);
  }
  else if(per>=50 && per<60)
  {
   printf("grade C and percentage is %f",per);
  }
  else if(per>=40 && per<50)
  {
   printf("grade D and percentage is %f",per);
  }
  else
  {
   printf("fail");
  }
  getch();
 }