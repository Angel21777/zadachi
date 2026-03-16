// zad8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    double uchebnikMat;
    printf("Cena na uchebnika po Matematika = ");
    scanf_s("%lf", &uchebnikMat);
    double uchebnikBg;
    printf("Cena na uchebnika po Balgarski ezik = ");
    scanf_s("%lf", &uchebnikBg);
    double uchebnikAe;
    printf("Cena na uchebnika po Angliiski ezik = ");
    scanf_s("%lf", &uchebnikAe);
    double uchebnikFizika;
    printf("Cena na uchebnika po Fizika = ");
    scanf_s("%lf", &uchebnikFizika);
    double Budget;
    printf("Buget s koito razpolaga Lili = ");
    scanf_s("%lf", &Budget);
    double cirk;
    printf("Cena na bilet za cirk = ");
    scanf_s("%lf", &cirk);
    double total;
    total = uchebnikMat + uchebnikBg + uchebnikAe + uchebnikFizika + cirk;
    if (Budget >= total)
        printf("Lili ima dostatachno pari. Ostavat: %.2lf", Budget-total );
    else
        printf("Lili nqma dostatachno pari. Trqbvat i oshte: %.2lf", total-Budget);

}

