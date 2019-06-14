void main(void)
{
char list[5][20];
int dex;
for(dex=0;dex<5;dex++)
{
printf("Enter Name %d",dex+1);
gets(list[dex]);
puts(list[dex]);
printf("\n");
}
getch();
}
