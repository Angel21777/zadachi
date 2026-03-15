// zad5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    int dogFood, catFood;
    printf("Broi opakovki hrana za kucheta = ");
    scanf_s("%d", & dogFood);
    printf("Broi opakovki hrana za kotki = ");
    scanf_s("%d", &catFood);
    float dogPrice = 2.50;
    float catPrice = 4.00;
    float total;
    total = (dogFood * dogPrice) + (catFood * catPrice);
    printf("total=%.2f lv.", total);
}
