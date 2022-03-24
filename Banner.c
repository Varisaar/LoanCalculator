#include "Banner.h"

void openingBanner()
{
    puts("================================================");
    puts("|   Finance calculator                         |");
    puts("|   CSC 130  Spring 2022                       |");
    puts("|   Collin Bleier                              |");
    puts("================================================");
}

void sectionABanner()
{
    puts("");
    puts("PAYMENT   APR   YEARS   FV    FV/Cont  FV/c - FV");
    puts("-------   ---   -----   ----  -------  ---------");
}

void sectionBBanner()
{
    puts("");
    puts("FV    Rates per Period    Periodic Payment    Number of Periods");
    puts("----  ----------------    ----------------    -----------------");
}

void sectionCBanner()
{
    puts("");
    puts("C1   Rate Per Period   Number of periods   Present Value");
    puts("---  ---------------   -----------------   -------------");
}