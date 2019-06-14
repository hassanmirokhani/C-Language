#include <stdio.h>
#include <conio.h>
#include <math.h>
 
long binaryToOctal(long n);
int main()
{
clrscr();
    long binary;
    printf("Enter a binary number\n");
    scanf("%ld", &binary);
    printf("Octal number of %ld(binary) is %ld\n", binary, binaryToOctal(binary));
     
 getch();
    return 0;
}
 
/* Function to convert a binary number to octal number */
long binaryToOctal(long n) {
 /* First convert Binary to decimal number */
    int remainder; 
    long decimal = 0, octal = 0, i = 0;
  
    while(n != 0) {
        remainder = n%10;
        n = n/10;
        decimal = decimal + (remainder*pow(2,i));
        ++i;
    }
     
    /*Now convert decimal to octal number */
    i = 1;
     
    while(decimal != 0) {
        remainder = decimal%8;
        decimal = decimal/8;
        octal = octal + (remainder*i);
        i = i*10;
    }
     
    return octal;
}