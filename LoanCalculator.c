#include <stdio.h>
#include "Banner.h"

float payment, interestRate, i, currentValue, futureValue, futureValueCont;

int years;

int sectionA()
{
    double payment = 500;
    double interestRate = 0.02/12.0;
    years = 5;
}
// TODO Use loops to generate the values of each row

// TODO Use functions to calculate the future value and the future value with continuous compounding
sectionABanner();

// Section B

// TODO use loops to generate the values of each row

// TODO use functions to calculate the periods to achieve the future value

sectionBBanner();

// Section C

// TODO compute the present values using the given current value, interest rate and number of periods

// TODO use loops to generate the values

// TODO use functions to calculate the present value of each row

sectionCBanner();