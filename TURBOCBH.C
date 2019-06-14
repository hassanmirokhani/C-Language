void main(void)
{
char ch,ch1;
while(ch!='\r')
{
printf("Enter First Character");
ch=getche();
printf("Enter Second Character");
ch1=getche();
printf("The Gap Is %d",ch-ch1-1);
}
getch();
}
