char getlc(void);
void main(void)
{
char getlc;
printf("Type 'a' For First Selection And 'b' For Second");
switch(getlc)
{
case 'a':
printf("\n You Typed 'a'");
break;
case 'b':
printf("You Typed 'b'");
break;
default:
printf("You Typed Non-Existent Selection");
break;
printf("%c",getlc);
}
}
char getlc(void)
{
char ch;
ch=getche();
if(ch>65&&ch<91)
ch=ch+32;
return(ch);
}

