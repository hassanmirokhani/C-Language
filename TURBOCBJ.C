void main(void)
{
int x,y,z;
clrscr();
for(y=1;y<9;y++)
for(z=1;z<4;z++)
{
for(x=1;x<9;x++)
   if((x+y)%2==0)
   printf("\xDB\xDB\xDB\xDB\xDB\xDB");
   else
   printf(" ");
if(y*z<24)
   printf("\n");
}
}
