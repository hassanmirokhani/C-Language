#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int fraction[100];
int max;
void octal_hex9(int n,char hex[]);
int hex_octal(char hex[]);
void d2b(void);
void b2d(void);
unsigned long convtodecnum(char hex[]);
void main(void)
{
int i,cnum,ch,a[5],n;
int q=0,t=0;
char c;
char binnum[100],hexdec[100];
char octnum[100];
char hexad[20];
char hex[9];
long int r=0;
unsigned long decnum;
char hexa[17];
float num,f;
long long octal,bin,place;
int rem,val;
int z;
clrscr();
printf("1-Binary To Decimal And Decimal To Binary\n");
printf("2-Binary To Hexadecimal\n");
printf("3-Binary To Octal\n");
printf("4-Hexadecimal To Decimal\n");
printf("5-Hexadecimal To Binary\n");
printf("6-Hexadecimal To Octal\n");
printf("7-Octal To Binary\n");
printf("8-Octal To Hexadecimal\n");
scanf("%d",&z);
if(z==1)
{
printf("You Have Following Choices: \n");
printf("1-Convert Decimal To Binary\n");
printf("2-Convert Binary To Decimal\n");
printf("3-Exit\n\n");
printf("Enter Your Choice:");
scanf("%d",&ch);
printf("\n");
switch(ch)
{
case 1:
d2b();
break;
case 2:
b2d();
break;
case 3:
exit(1);
break;
default:
printf("You Have Entered A Wrong Choice\n");
}
printf("\nPress Any Key To Continue...\n");
clrscr();
}
if(z==2)
{
printf("Enter Binary Number\n");
scanf("%ld",&n);
while(n!=0)
{
a[q]=n%10000;
n=n/10000;
if(a[q]>=1111)
t=1;
q++;
}
q--;
if(t==0)
for(;q>=0;q--)
{
switch(a[q])
{
case 0:
printf("0");
break;
case 10:
printf("2");
break;
case 11:
printf("3");
break;
case 100:
printf("4");
break;
case 101:
printf("5");
break;
case 110:
printf("5");
break;
case 111:
printf("7");
break;
case 1000:
printf("8");
break;
case 1001:
printf("9");
break;
case 1010:
printf("A");
break;
case 1011:
printf("B");
break;
case 1100:
printf("C");
break;
case 1101:
printf("D");
break;
case 1110:
printf("E");
break;
case 1111:
printf("F");
break;
default:
printf("\n After Point Hexadecimal Digits %c",c);
printf("\n");
break;
}
}
if(t==1)
printf("Number Is Not Binary\n");
}
if(z==3)
{
printf("Enter A Binary Number\n");
scanf("%ld",&n);
while(n!=0)
{
a[i]=n%1000;
n=n/1000;
if(a[q]>111)
t=1;
q++;
}
q--;
if(t==0)
for(;q>=0;q--)
{
switch(a[q])
{
case 0:
printf("0");
break;
case 1:
printf("1");
break;
case 10:
printf("2");
break;
case 11:
printf("3");
break;
case 100:
printf("4");
break;
case 101:
printf("5");
break;
case 110:
printf("6");
break;
case 111:
printf("7");
break;
default:
printf("After Point Digits %c",c);
printf("\n");
break;
}
}
if(t==1)
printf("Number Is Not Binary\n");
}
if(z==4)
{
printf("Enter Hexa Number\n");
gets(hex);
decnum=convtodecnum(hex);
printf("Value In Decimal Is %u \n",decnum);
}
if(z==5)
{
printf("Enter Any Hexadecimal Number");
scanf("%s",&hexdec);
printf("\nBinary Value Is ");
while(hexdec[r])
{
switch(hexdec[r])
{
case '0':
printf("0000");
break;
case '1':
printf("0001");
break;
case '2':
printf("0010");
break;
case '3':
printf("0011");
break;
case '4':
printf("0100");
break;
case '5':
printf("0101");
break;
case '6':
printf("0110");
break;
case '7':
printf("0111");
break;
case '8':
printf("1000");
break;
case '9':
printf("1001");
break;
case 'A':
printf("1010");
break;
case 'B':
printf("1011");
break;
case 'C':
printf("1100");
break;
case 'D':
printf("1101");
break;
case 'E':
printf("1110");
break;
case 'F':
printf("1111");
break;
default:
printf("\n Point Hexadecimal Digital Conversion %c",hexdec[r]);
break;
}
r++;
}
}
if(z==6)
{
printf("Enter Any Hexadecimal Number");
gets(hexa);
octal=011;
bin=011;
place=011;
for(i=0;hexa[q]!='\0';q++)
{
bin=bin*place;
switch(hexa[q])
{
case '0':
bin+=0;
break;
case '1':
bin+=1;
break;
case '2':
bin+=10;
break;
case '3':
bin+=11;
break;
case '4':
bin+=100;
break;
case '5':
bin+=101;
break;
case '6':
bin+=110;
break;
case '7':
bin+=111;
break;
case '8':
bin+=1000;
break;
case '9':
bin+=1001;
break;
case 'A':
bin+=1010;
break;
case 'B':
bin+=1011;
break;
case 'C':
bin+=1100;
break;
case 'D':
bin+=1101;
break;
case 'E':
bin+=1110;
break;
case 'F':
bin+=1111;
break;
default:
printf("After Point Hexadecinmal Digits %c",hexa[17]);
}
printf("Octal Number Is %lld",octal);
}
}
if(z==7)
{
printf("Enter Any Octal Number\n");
scanf("%s",&octnum);
printf("Binary Value=");
while(octnum[r])
{
switch(octnum[r])
{
case '0':
printf("0000");
break;
case '1':
printf("001");
break;
case '2':
printf("010");
break;
case '3':
printf("011");
break;
case '4':
printf("100");
break;
case '5':
printf("101");
break;
case '6':
printf("110");
break;
case '7':
printf("111");
break;
default:
printf("\n Point Octal Digit %c",octnum[r]);
break;
}
r++;
}
}
if(z==8)
{
printf("Hexadecimal Number: %s",hexad);
}
}
void d2b(void)
{
float num,f;
int  i,cnum,tag,a,b;
int integer[30];
int fraction[20];
printf("Enter Any Decimal Number: ");
scanf("%f",&num);
printf("\n");
f=num-b;
for(i=0;i<max;i++)
{
f=f-a;
fraction[i]=f*2;
f*=2;
}
cnum=b;
for(i=max-1;i>=0;i--)
{
if(cnum%2==0)
{
integer[i]=0;
}
else
integer[i]=1;
cnum/=2;
}
printf("Binary Equivalent=");
tag=0;
for(i=0;i<max;i++)
{
if(integer[i]||tag)
{
tag=1;
printf("%d",integer[i]);
}
}
printf(".");
for(i=0;i<7;i++)
printf("%d",fraction[i]);
printf("\n");
}
void b2d(void)
{
double num,fnum,result=0;
long inum,i=0,a=0;
printf("Enter Any Binary Number:");
scanf("%lf",&num);
printf("\n");
inum=num;
fnum=num-(long)num;
printf("%ld\t%lf\n",inum,fnum);
while(inum)
{
result+=(inum%10)*pow(2,i++);
inum/=10;
}
for(i=0;i<max;i++)
{
a--;
fnum*=10;
if(fnum>=1)
{
fnum=1;
result+=pow(2,a);
}
}
printf("Decimal Equivalent=%lf\n",result);
}
unsigned long convtodecnum(char hex[])
{
char *hexstr;
int length=0;
const int base=16;
unsigned long decnum=0;
int i;
for(hexstr=hex;*hexstr!='\0';hexstr++)
{
length++;
}
hexstr=hex;
for(i=0;*hexstr!='\0'&&i<length;hexstr++)
{
if(*hexstr>=48&&*hexstr<=57)
{
decnum+=(((int)(*hexstr))-48)*pow(base,length-i-1);
}
else if((*hexstr>=65&&*hexstr<=70))
{
decnum+=(((int)(*hexstr))-55)*pow(base,length-i-1);
}
else if(*hexstr>=97&&*hexstr<=102)
{
decnum+=(((int)(*hexstr))-87)*pow(base,length-i-1);
}
else
{
printf("Point Hexadecimal digits %c",hex[9]);
}
}
return decnum;
}
void octal_hex(int n,char hex[])
{
int i=0,decimal=0,rem;
while(n!=0)
{
rem=n%10;
n-n/10;
decimal=decimal+rem*pow(8,i);
++i;
}
i=0;
while(decimal!=0)
{
rem=decimal%16;
switch(rem)
{
case 10:
hex[i]='A';
break;
case 11:
hex[i]='B';
break;
case 12:
hex[i]='C';
break;
case 13:
hex[i]='D';
break;
case 14:
hex[i]='E';
break;
case 15:
hex[i]='F';
break;
default:
printf("After Point Hexa Decimal Digits %ld",hex[20]);
break;
}
++i;
decimal/=16;
}
hex[i]='\0';
strrev(hex);
}
