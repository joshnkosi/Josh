#include <stdio.h>
#include <math.h>
#define TITLE "DECIMAL TO RADIX-i converter"
#define AUTHOR "DUMSANE NKOSI"
#define YEAR 2022

// THIS IS NOT THE REAL CODE THE REAL CODE IS IN THE OTHER REPOSITORY CALLED MAIN(1).C

void Dec2RadixI(int decValue, int radValue)
{
    int i, dev1, dev, j;
    float lg;
    char rad[100]  ;
    dev1 = decValue ;
    lg   = log(decValue)/log(radValue);
    lg   = ceil(lg);
    j    = lg+1;
    /*the for loop adds successive modules of the decimal input
    devived by the radix input*/
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
        scanf("%d",&decValue);
        if (decValue < 0){
            printf("EXIT");
            break;
            }
        printf("The decimal number you have entered is %d",decValue);
        printf("\nEnter a radix for the converter between 2 and 16: ");
        scanf("%d",&radValue);
        printf("The radix you have entered is %d", radValue);
        lg  = log(decValue)/log(2);  //calculates the number of bits
        printf("\nThe log2 of the number is %.2f",lg);
        printf("\nThe integer result of the number divided by %d is %d",radValue,(decValue/radValue));
        printf("\nThe remainder is %d", decValue%radValue);
        Dec2RadixI(decValue,radValue);
    }
}
