// приложение, което отпечатва на екрана числа във форма
//

#include <iostream>
#include <stdio.h>

int main()
{
    int number;
    printf("Vavedi 4islo: ");
    scanf_s("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        printf("\n");
        for (int j = 1; j <=i; j++)
        {
            printf("%d ", j);
        }
    }
}

