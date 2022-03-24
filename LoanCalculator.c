#include <stdio.h>
#include <string.h>

float payment, interestRate, i, currentValue, futureValueCont;
double futureValue;
int years;

int main()
{
    double payment = 500;
    double interestRate = 0.02/12.0;
    years = 1;
    i = 1;
    sectionABanner();
    while (i <= 5)
    {
        futureValue = payment * (1 + interestRate) * 5;
        printf("$%.2f   %.2f   %d      $%.2f\n", payment, interestRate, years, futureValue);
        i++;
        years++;
    }
}
// TODO Use loops to generate the values of each row

// TODO Use functions to calculate the future value and the future value with continuous compounding

// Section B

// TODO use loops to generate the values of each row

// TODO use functions to calculate the periods to achieve the future value

// sectionBBanner();

// Section C

// TODO compute the present values using the given current value, interest rate and number of periods

// TODO use loops to generate the values

// TODO use functions to calculate the present value of each row

// sectionCBanner();