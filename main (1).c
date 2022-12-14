#include <stdio.h>
#include <math.h>
#define TITLE "DECIMAL TO RADIX-i converter"
#define AUTHOR "DUMSANE NKOSI"
#define YEAR 2022


void Dec2RadixI(int decValue, int radValue)
{
    int i, dev1, dev, j;
    float lg;
    char rad[100]  ;
    dev1 = decValue ;
    lg   = log(decValue)/log(radValue);
    /* adds one to lg if lg is a whole number*/
    if (lg == ceil(lg)){
        lg   = lg + 1;
    }else{
        lg  = ceil(lg);
    }
    j = lg;

   /*the for loop adds successive modules of the decimal input
    devided by the radix input*/
    for(i == 0; i<=lg; i++)
    {
        dev = dev1%radValue;

        if (dev<10)
        {
            rad[i] = 48 + dev;

        } else{
            rad[i] = 55 + dev;
        }
        dev1 = dev1/radValue; //new decimal number
    }
    printf("\nThe radix-%d value is ",radValue);

    while (j != 0)
    {
        j = j-1;
        printf("%c",rad[j]);
    }
}

void main()
{
    int decValue,radValue;
    float lg;
    printf("*****************************");
    printf("\n "TITLE);
    printf("\n Written by: %s", AUTHOR);
    printf("\n Date: %d", YEAR);
    printf("\n*****************************");
    decValue = 0;
    while (1){
        printf("\nEnter a decimal number: ");
        scanf("%d",&decValue);                                       //takes in decimal and stores it at &decValue
        if (decValue < 0){
            printf("EXIT");
            break;
            }
        printf("The decimal number you have entered is %d",decValue);
        printf("\nEnter a radix for the converter between 2 and 16: ");
        scanf("%d",&radValue);                                           //takes in radix and stores it at &radValue
        printf("The radix you have entered is %d", radValue);
        lg  = log(decValue)/log(2);  //calculates the number of bits
        printf("\nThe log2 of the number is %.2f",lg);
        printf("\nThe integer result of the number divided by %d is %d",radValue,(decValue/radValue));
        printf("\nThe remainder is %d", decValue%radValue);
        Dec2RadixI(decValue,radValue);
    }
}
