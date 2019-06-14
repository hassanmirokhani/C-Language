void main(void)
{
int ram,shyam,ajay;
clrscr();
printf("Enter Ages Of Ram,Shyam And Ajay");
scanf("%d%d%d",&ram,&shyam,&ajay);
if(ram<shyam)
{
if(ram<ajay)
printf("Ram Is Younger");
else
printf("Ajay Is Younger");
}
else
{
if(shyam<ajay)
printf("Shyam Is Younger");
else
printf("Ajay Is Younger");
}
getch();
}
