void main(void)
{
int a,b,c,d,e,f,g,i,j;
clrscr();
printf("Enter Five Digit Number\n");
scanf("%d",&a);
b=a%10;
c=a/10;
d=c%10;
e=c/10;
f=e%10;
g=e/10;
i=g%10;
j=g/10;
printf("The Reverse Number Is %d%d%d%d%d",b,d,f,i,j);
printf("THe Original And Reverse Numbers Are Not Equal");
getch();
}
