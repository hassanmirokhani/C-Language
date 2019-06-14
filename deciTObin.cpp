#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
clrscr();
long a,b=0,i=1;
float c=0,k=0.1f,temp1,e,f;
printf("enter decimal number\n\n");
scanf("%f",&f);
a=(int)f;
d=f-(int)f;
while(a>0)
{
b=b+a%2*i;
i=i*10;
a=a/2;
}
while(k>0.0001)
{
temp1=d*2;
c=c+((int)temp1)*k;
k=k/10;
}
e+b+c;
printf("binary=%lf",e);
getch();
}