#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
long int i=0;
char octnum[1000];
printf("Enter any Octal Number : ");
scanf("%s",octnum);
printf("Binary Value = ");
while(octnum[i])
{
switch(octnum[i])
{
case '0' : printf("000");
		break;
case '1' : printf("001");
		break;
case '2' : printf("010");
		break;
case '3' : printf("011");
		break;
case '4' : printf("100");
		break;
case '5' : printf("101");
		break;
case '6' : printf("110");
		break;
case '7' : printf("111");
		break;
default  : printf("\nPoint Octal Digit %c",octnum[i]);
		break;
}
i++;
}
getch();
}