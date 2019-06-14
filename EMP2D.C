void main(void)
{
int list[10][6];
int a;
char name,id,age,status,sex,experience;
printf("Enter Serial Number\n");
scanf("%d\n",a);
printf("Enter Name,Id,Age,Status,Sex,Experience\n");
gets(name,id,age,status,sex,experience);
if(age>=25&&age<=45)
{
printf("%d",a);
}
if(experience>=5&&age>=55)
{
printf("%d",a);
}
getch();
}

