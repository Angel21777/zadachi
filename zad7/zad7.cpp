// zad7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    float zelenchuci, plodove;
    printf("Kilogrami zelenchuci = ");
    scanf_s("%f",&zelenchuci);
    printf("Kilogrami plodove = ");
    scanf_s("%f",&plodove);
    float  N, M;
    printf("Cena za kg zelenchuci = ");
    scanf_s("%f",&N);
    printf("Cena za kg plodove = ");
    scanf_s("%f",&M);
    float total_lv;
    total_lv = (zelenchuci * N) + (plodove * M);
    printf("BGN=%.2f lv\n", total_lv);
    float total_dolar;
    const float kursDolar = 1.713;
    total_dolar = total_lv / kursDolar;
    printf("USD=%.2f $", total_dolar);

    

}
