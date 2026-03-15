// zad6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    double celzii;
    printf("Vavedi gradusi celzii= ");
    scanf_s("%lf", &celzii);
    double farenhain;
    farenhain = (celzii * (9.0 / 5.0) + 32);
    printf("farenhain=%.2lf", farenhain);
}


