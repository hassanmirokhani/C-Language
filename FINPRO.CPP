#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
float dec=0,bin=0,oct=0,hex=0,a=1,i=0,rem;
long int dec2hex=0;
char hexdigits[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}
char hexadecimal[30];
int k,j,power=0,digit;
int c;
printf("1-Decimal To Binary\n");
printf("2-Decimal To Octal\n");
printf("3-Decimal To Hexadecimal\n");
printf("4-Binary To Decimal\n");
printf("5-Binary To Octal\n");
printf("6-Binary To Hexadecimal\n");
printf("7-Octal To Decimal\n");
printf("8-Octal To Binary\n");
printf("9-Octal To Hexadecimal\n");
printf("10-Hexadecimal To Decimal\n");
printf("11-Hexadecimal To Binary\n");
printf("12-Hexadecimal To Octal\n");
scanf("%d",&c);
if(c==1)
{
printf("Enter Decimal Number\n");
scanf("%f",&dec);
while(dec>0)
{
rem=dec%2;
dec=dec/2;
bin=bin+rem*a;
a=a*10;
}
printf("Binary Is=%f",bin);
}
if(c==2)
{
printf("Enter Decimal Number\n");
scanf("%f",&dec);
while(dec>0)
{
rem=dec%8;
dec=dec/8;
oct=oct+rem*a;
a=a*10;
}
printf("Octal Is=%f",oct);
}
if(c==3)
{
printf("Enter Any Deimal Number\n");
scanf("%f",&dec);
printf("Hexadecimal=%x",dec);
}
if(c==4)
{
printf("Enter Binary Number\n");
scanf("%f",&bin);
while(bin>0)
{
rem=bin%10;
bin=bin/10;
dec=dec+(rem*pow(2,i));
i++;
}
printf("Decimal Is %f",dec);
}
if(c==5)
{
printf("Enter Binary Number\n");
scanf("%f",&bin);
while(bin>0)
{
rem=bin%10;
bin=bin/10;
dec=dec+(rem*pow(2,i);
i++;
}
while(dec>0)
{
rem=dec/8;
dec=dec/8;
oct=oct+rem*a;
a=a*10;
}
printf("Octal Is=%f",oct);
}
if(c==6)
{
printf("Enter Binary Number\n");
scanf("%f",&bin);
while(bin!=0)
{
rem=bin%10;
hex=hex+rem*a;
a=a*2;
bin=bin/10;
}
printf("Hexadecimal Is=%x",hex);
}
if(c==7)
{
printf("Enter Any Octal Number\n");
scanf("%f",&oct);
while(oct>0)
{
rem=oct%10;
oct=oct/10;
dec=dec+(rem*pow(8,i));
i++;
}
printf("Decimal Is:%f",dec);
}
if(c==8)
{
printf("Enter Any Octal Number\n");
scanf("%f",&oct);
while(oct>10)
{
rem=oct%10;
oct=oct/10;
dec=dec+(rem*pow(8,i));
i++;
}
while(dec>0)
{
rem=rem%2;
dec=dec/2;
bin=bin+rem*a;
a=a*10;
}
printf("Binary Is:%f\n",bin);
}
if(c==9)
{
printf("Enter Any Octal Number\n");
scanf("%f",&oct);
while(oct>0)
{
rem=oct%10;
oct=oct/10;
dec=dec+(rem*pow(8,i));
i++;
}
printf("Hexadecimal Is=%x\n",dec);
}
if(c==10)
{
printf("Enter Hexadecimal Number\n");
scanf("%s",&hexadecimal);
for(k=strlen(hexadecimal-1;i>0;i--)
{
for(j=0;j<16;j++)
{
if(hexadecimal[k]==hexdigits[j])
{
dec+=j*pow(16,i);
}
}
i++;
}
printf("Decimal Number: %f\n",dec);
}
if(c==11)
{
printf("Enter A Hexadecimal Number\n");
scanf("%s",&hexadecimal);
for(k=strlen(hexadecimal)-1;k>=0;k--)
{
for(j=0;j<16;j++)
{
if(hexadecimal[k]=hexdigits[j])
{
dec+=j*pow(16,i));
}
}
i++
}
while(dec>0)
{
rem=dec%2;
dec=dec/2;
bin=bin+rem*a;
a=a*10;
}
printf("Binary Is %f\n);
}
if(c==12)
{
printf("Enter A Hexadecimal Number\n");
scanf("%s",&hexadecimal);
for(k=strlen(hexadecimal)-1;k>=0;k--)
{
for(j=0;j<16;j++)
{
if(hexadecimal[k]=hexdigits[j])
{
dec+=dec*pow(16,i);
}
}
i++
}
while(dec>0)
{
rem=dec%8;
dec=dec/8;
oct=oct+rem*a;
a=a*10;
}
printf("Octal Is %f",oct);
}
}
