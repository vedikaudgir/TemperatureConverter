// THIS PROGRAM CONVETS TEMPERATURE IN dIFFERENT UNITS.

#include <stdio.h>
#include <conio.h>

void main()
{
    float cTemp,fTemp,kTemp;
    char choice;

    printf("Enter A to convert celcius to farenheit\nEnter B to convert farenheit to celcius\nEnter C to convert celcius to kelvin\nEnter D to convert kelvin to celcius\nEnter E to convert kelvin to farenheit\nEnter F to convert farenheit to kelvin\n");
    scanf("%c",&choice);

    switch(choice)
    {
        case 'A':
        
            printf("Enter the temperature in celcius");
            scanf("%f",&cTemp);
            fTemp=(1.8*cTemp)+32;
            printf("The temperature in farenheit is = %0.2f",fTemp);
            break;
        
         case 'B':
        
            printf("Enter the temperature in farenheit ");
            scanf("%f",&fTemp);
            cTemp=(fTemp-32)*0.5555555556;
            printf("The temperature in celcius is = %0.2f",cTemp);
            break;
        
         case 'C':
        
            printf("Enter the temperature in celcius ");
            scanf("%f",&cTemp);
            kTemp=cTemp+273;
            printf("The temperature in kelvin is = %0.2f",kTemp);
            break;
        
        case 'D':
        
            printf("Enter the temperature in kelvin ");
            scanf("%f",&kTemp);
            cTemp=kTemp-273;
            printf("The temperature in celcius is = %0.2f",cTemp);
            break;
        
        case 'E':
        
            printf("Enter the tempreature in kelvin ");
            scanf("%f",&kTemp);
            fTemp=((kTemp-273)*1.8)+32;
            printf("The tempreature in farenheit is = %0.2f",fTemp);
            break;
        
        case 'F':
        
            printf("Enter the temperature in farenheit ");
            scanf("%f",&fTemp);
            kTemp=((fTemp-32)*0.5555556)+273.15;
            printf("The temperature in kelvin is = %0.2f",kTemp);
            break;
        
        default:
        
            printf("Invalid Input!! Please run the code again with valid input.");
        

    }
}