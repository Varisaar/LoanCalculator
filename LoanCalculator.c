#include <stdio.h>
#include "Banner.h"

float payment, interestRate, i, currentValue, futureValueCont;
double futureValue;
int years;

int main()
{
    openingBanner();
    sectionA();
}

int sectionA()
{
    double payment = 500;
    double interestRate = 0.02;
    years = 5;
    i = 1;
    sectionABanner();
    while (i <= 5)
    {
        futureValue = payment * (1 + interestRate);
        printf("$%.2f   %.2f   %d      $%.2f\n", payment, interestRate, years, futureValue);
        i++;
    }
}
// TODO Use loops to generate the values of each row

// TODO Use functions to calculate the future value and the future value with continuous compounding

int sectionB()
{
    
}

// TODO use loops to generate the values of each row

// TODO use functions to calculate the periods to achieve the future value

// sectionBBanner();

// Section C

// TODO compute the present values using the given current value, interest rate and number of periods

// TODO use loops to generate the values

// TODO use functions to calculate the present value of each row

// sectionCBanner();