// игра магическо число

#include <iostream>
#include <stdio.h>

int main()
{
    const int MagicNumber = 83;
    printf("Tova e igrata magi4eskoto 4islo\nImate 10 jivota\n4isloto e v granici ot 1 do 100");
    int guess;
    for (int counter = 0; counter <= 10; counter++)
    {
        printf("\nVavedete 4islo = ");
        scanf_s("%d", &guess);

        if (guess == MagicNumber)
        {
            printf("Vie poznahte magi4eskoto 4islo e = %d", MagicNumber);
            break;
        }
        else if (guess < MagicNumber)
        {
            printf("Magi4eskoto 4islo e po golqmo ot %d", guess);
            printf("\nostavat vi %d jivota",10 - counter );
        }
        else
        {
            printf("Magi4eskoto 4islo e po malko ot %d", guess);
            printf("\nostavat vi %d jivota",10 - counter );
        }
        if (counter==0)
        {
            printf("\n\nnqmash pove4e jivoti ti zagubi");
        }
    }
}

