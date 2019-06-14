#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
float a,b,c,d,e,f,g;
printf("Sir Syed University Of Engineering And Technology\n");
printf("Name: Muhammad Hassan\n");
printf("Roll No: 07472\n");
printf("Subjects\t Max Marks\t Marks Obtained\n");
printf("Enter Marks In English, Urdu, Physics, Chemistry, Maths");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
printf("English\t 100\t %f\n",a);
printf("Urdu\t    100\t %f\n",b);
printf("Physics\t 100\t %f\n",c);
printf("Chemistry\t 100\t%f\n",d);
printf("Maths\t   100\t  %f\n",e);
f=a+b+c+d+e;
printf("Total=%f",f);
g=(f/500)*100;
printf("Percentage=%f",g);
getch();
}