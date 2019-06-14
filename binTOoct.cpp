#include<stdio.h>
#include <conio.h>
#include <math.h>
void main(void)
{
int a;
         int n;
         char c;
       clrscr();
         int i=0,a[5],t=0;
         long int n;

         clrscr();

        printf("Enter a Binary number\n");

        scanf("%ld",&n);

         while(n!=0)

         {

          a[i]=n%1000;

          n=n/1000;

          if(a[i]>111)

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

            default:

            printf("\n after point digits %c,c");

 printf("\n");

             break;

           }

          }

         if(t==1)

          printf("Number is not Binary\n)";

}
getch();
}
