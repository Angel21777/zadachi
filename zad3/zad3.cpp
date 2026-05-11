// Да се намери средно аритметично на вс стойности между к и м
//

#include <iostream>
#include <stdio.h>
const int N = 4;
const int k = 5;
const int m = 10;

int main()
{
	double mA[N];
	double suma = 0;
	double counter = 0;
	for (int i = 0; i < N; i++)
	{
		scanf_s("%lf", &mA[i]);
		if (mA[i] > k && mA[i]<m)
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
		printf("nqma stoinosti mejdu k i m");
	}
}

