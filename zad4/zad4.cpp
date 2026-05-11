// Средно аритметично на всички четни числа
//

#include <iostream>
#include <stdio.h>
const int N = 4;

int main()
{
	int mA[N];
	int suma = 0;
	int counter = 0;
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &mA[i]);
		if (mA[i] % 2 == 0)
		{
			suma += mA[i];
			counter++;
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d ", mA[i]);
	}
	printf("\n");
	if (counter > 0)
	{
		printf("sredno = %d\n", suma / counter);
	}
	else
	{
		printf("nqma 4etni 4isla");
	}
}


