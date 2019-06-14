#include<stdio.h> 
#include<math.h> 
#include<string.h> 

void octal_hex(int n, char hex[]); int hex_octal(char hex[]); 
int main() 
{ 
     char hex[20],c; int n; 
 printf("Enter octal number: "); 
scanf("%d",&n); 
octal_hex(n,hex); 

printf("Hexadecimal number:%s",hex); 
  return 0; 
} 


void octal_hex(int n, char hex[])  
{ 
int i=0,decimal=0, rem; 
while (n!=0) 
{ 
   rem = n%10; 
    n=n/10; 
   decimal=decimal+rem*pow(8,i); 
   ++i; 
 }

i=0; 
while (decimal!=0) { 
rem=decimal%16; 
switch(rem) 
{ 
case 10: 
         hex[i]='A'; 
           break; 
case 11: 
       hex[i]='B'; 
            break; 
case 12: 
        hex[i]='C'; 
            break; 
case 13: hex[i]='D'; 
           break; 
case 14: hex[i]='E'; 
           break; 
case 15: hex[i]='F'; break; 
default: 
         printf("After point hexa decimal digits",hex[20]); 
         break; 
} 
++i; 
decimal/=16; 
} hex[i]='\0'; strrev(hex); /* Function to reverse string. */ }