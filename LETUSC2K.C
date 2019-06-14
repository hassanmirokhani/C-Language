void main(void)
{
char a;
clrscr();
printf("Enter Any Character");
scanf("%c",&a);
if(a>=65&&a<=90)
{
printf("You Entered A Capital Letter");
}
if(a>=97&&a<=122)
{
printf("You Entered A Small Letter");
}
if(a>=48&&a<=57)
{
printf("You Enter A Digit");
}
if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>123&&a<=127))
{
printf("You Entered A Special Symbol");
}
getch();
}
