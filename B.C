int octal(int);
int dec=0;
void main(void)
{
long int bin,oct,a=0;
printf("Enter Any Binary Number");
scanf("%ld",&bin);
while(bin>0)
{
rem=bin%10;
bin=bin/10;
dec=dec+(rem*pow(2,a));
a++;
}
printf("Octal Is %ld",octal(oct));
}
int octal(int b)
{
int c,p=1;
while(dec>0)
c=c%8;
dec=dec/8;
b=b+c*p;
p=p*10;
}
return b;
}
