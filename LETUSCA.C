void main(void)
{
int basicsalary,dearnessallowance,rentallowance,grosssalary;
dearnessallowance=0.4;
rentallowance=0.2;
printf("Enter Ramesh's Basic Salary");
scanf("%d",& basicsalary);
dearnessallowance=(basicsalary*0.4);
rentallowance=(basicsalary*0.2);
grosssalary=(basicsalary+dearnessallowance+rentallowance);
printf("Ramesh's Gross Salary Is %d",grosssalary);
getch();
}