// Ќамиране на средно аритметично на отрицателните стойности на масив
//

#include <iostream>
#include <stdio.h>
const int N = 4;
int main()
{
	double mA[N];
	double suma = 0;
	double counter=0;
	for (int i = 0; i < N; i++)
	{
		scanf_s("%lf",&mA[i]);
		if (mA[i]<0)
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
	if (counter>0)
	{
		printf("sredno = %.2lf\n", suma / counter);
	}
	else
	{
		printf("nqma otricatelni 4isla");
	}
}

