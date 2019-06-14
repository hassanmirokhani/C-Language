/* C Program - Hexadecimal to Decimal Conversion */
		
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

unsigned long convtodecnum(char hex[]);

void main()
{
    clrscr();
    unsigned long decnum;
    char hex[9];// 8 characters for 32-bit Hexadecimal Number and one for ' '
    printf(" Enter 32-bit Hexadecimal Number : ");
    scanf("%s", hex);

    decnum = convtodecnum(hex);
    printf("Value in Decimal Number is %u  \n", decnum);

    getch();
}

unsigned long convtodecnum(char hex[])
{
    char *hexstr;
    int length = 0;
    const int base = 16; // Base of Hexadecimal Number
    unsigned long decnum = 0;
    int i;
    // Find length of Hexadecimal Number
    for (hexstr = hex; *hexstr != '\0'; hexstr++)
    {
	length++;
    }
    // Find Hexadecimal Number
    hexstr = hex;
    for (i = 0; *hexstr != '\0' && i < length; i++, hexstr++)
    {
	// Compare *hexstr with ASCII values
	if (*hexstr >= 48 && *hexstr <= 57)   // is *hexstr Between 0-9
	{
	    decnum += (((int)(*hexstr)) - 48) * pow(base, length - i - 1);
	}
	else if ((*hexstr >= 65 && *hexstr <= 70))   // is *hexstr Between A-F
	{
	    decnum += (((int)(*hexstr)) - 55) * pow(base, length - i - 1);
	}
	else if (*hexstr >= 97 && *hexstr <= 102)   // is *hexstr Between a-f
	{
	    decnum += (((int)(*hexstr)) - 87) * pow(base, length - i - 1);
	}
	else
	{
	    printf(" Point HEXADECIMAL digits %c",hex[9] \n");

	}
    }
    return decnum;
}