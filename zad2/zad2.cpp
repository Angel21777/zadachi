// Да се намери средно аритметично на вс стойности по големи от к
//

#include <iostream>
#include <stdio.h>
const int N = 4;
const int k = 7;
int main()
{
	double mA[N];
	double suma = 0;
	double counter = 0;
	for (int i = 0; i < N; i++)
	{
		scanf_s("%lf", &mA[i]);
		if (mA[i] > k)
		{
			suma += mA[i];
			counter++;
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%.2lf ", mA[i]);
	}
	printf("\n");
	if (counter > 0)
	{
		printf("sredno = %.2lf\n", suma / counter);
	}
	else
	{
		printf("nqma po golemi stoinosti ot k");
	}
}


