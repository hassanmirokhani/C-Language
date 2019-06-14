void main(void)
{
int x,y;
clrscr();
for(y=1;y<24;y++)
{
for(x=1;x<24;x++)
   if(x==y||x==24-y||x==12||y==12)
   printf("\xDB");
   else
   printf("\xBO");
printf("\n");
}
}
