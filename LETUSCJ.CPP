#include<stdio.h>
#include<conio,h>
#include<math.h>
void main(void)
{
double men,women,illiteratemen,literatemen,population,literacy;
population=80000;
men=population*(52/100);
women=population-men;
literatemen=population*(35/100);
illiteratemen=men-literatemen;
printf("The Populate Of Illiterate Men Is %lf",illiteratemen);
printf("The Population Of Women Is %lf",women);
getch();
}