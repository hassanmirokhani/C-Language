#include<stdio.h>
#include<conio.h>
#include<math.h>
float power(float,float);
void main(void)
{
float a,b;
printf("Enter Number\n");
scanf("%f",&a);
printf("Enter Power Raised To\n");
scanf("%f",&b);
printf("pow(%f,%f)=%f",a,b,power(a,b));
}
float power(float x,float y)
{
return(pow(x,y));
}
