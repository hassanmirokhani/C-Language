#include <stdio.h>
#include <math.h>
#include<conio.h>
void main(void)
{
clrscr();
long int octal, decimal = 0;
int i = 0;
printf("Enter any octal number:\n");
scanf("%ld",&octal);
while (octal != 0)
{
decimal =  decimal +(octal % 10)* pow(8,i++);
octal = octal / 10;
}
printf("decimal value: %ld",decimal);
getch();
}