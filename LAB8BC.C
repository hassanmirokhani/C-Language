void line(void);
void main(void)
{
line();
printf("\xDB SSUET \xDB\n");
line();
getch();
}
void line(void)
{
int j;
for(j=1;j<=20;j++)
printf("\xDB");
printf("\n");
}
