#include <stdio.h>
#include <math.h>
#define TITLE "DECIMAL TO RADIX-i converter"
#define AUTHOR "DUMSANE NKOSI"
#define YEAR 2022


void Dec2RadixI(int decValue, int radValue)
{
    int i, rad, dev1, dev2, lg, pw;
    char rad1 ;
    rad = 0;
    dev1 = decValue ;
    rad = 0;
    lg  = log(decValue)/log(radValue);
    /*the for loop adds successive modules of the decimal input
    devived by the radix input*/
    for(i == 0; i<= lg;i ++)
    {
        dev2 = dev1%radValue;
        rad1 = dev2 + rad1;
        printf("%s",rad1);
        if ((dev2 != 0)&(dev2<9))
        {
            pw = pow(10, (i));
            rad = rad + dev2*pw;//the radix -radvale number
        }

         dev1 = dev1/radValue; //new decimal number
    }
    printf("\nThe radix-%d value is %d", radValue, rad);
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
        scanf("%d",&decValue);
        if (decValue < 0){
            printf("EXIT");
            break;
            }
        printf("The decimal number you have entered is %d",decValue);
        printf("\nEnter a radix for the converter between 2 and 16: ");
        scanf("%d",&radValue);
        printf("The radix you have entered is %d", radValue);
        lg  = log(decValue)/log(radValue);
        printf("\nThe log%d of the number is %.2f",radValue,lg);

        printf("\nThe integer result of the number divided by %d is %d",radValue,(decValue/radValue));
        printf("\nThe remainder is %d", decValue%radValue);
        Dec2RadixI(decValue,radValue);

    }



}
