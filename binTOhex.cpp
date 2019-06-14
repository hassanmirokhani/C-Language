#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int a;
int n;
char c;
clrscr();
{

         int i=0,a[5],t=0;

         long int n;

         clrscr();

       printf("Enter a Binary number\n");

         scanf("%ld",&n);

         while(n!=0)

         {

          a[i]=n%10000;

          n=n/10000;

          if(a[i]>1111)

           t=1;

          i++;

         }

         i--;

         if(t==0)

          for(;i>=0;i--)

          {

           switch(a[i])

           {

            case 0:

             printf("0");

             break;

            case 1:

            printf("1");

             break;

            case 10:

            printf("2");

             break;

            case 11:

            printf("3");

             break;

            case 100:

            printf("4");

             break;

            case 101:

            printf("5");

             break;

            case 110:

            printf("6");

             break;

            case 111:

             printf("7");

             break;

            case 1000:

             printf("8");

             break;

            case 1001:

            printf("9");

             break;

            case 1010:

            printf("A");

             break;

            case 1011:

             printf("B");

             break;

            case 1100:

             printf("C");

             break;

            case 1101:

             printf("D");

             break;

            case 1110:

            printf("E");

             break;

            case 1111:

            printf("F");

             break;

            default:

            printf("\nafter point hexadecimal digits %c",c);

 printf("\n");

             break;

           }

          }

         if(t==1)

          printf("Number is not Binary\n");

}

getch();

}
