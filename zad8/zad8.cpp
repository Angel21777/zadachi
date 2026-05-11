// ¬секи елемент на масива се умножава по k
//

#include <iostream>
#include <stdio.h>
const int N = 4;
const int k = 2;

int main()
{
	int mA[N];
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &mA[i]);
		mA[i] *= k;
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d ", mA[i]);
	}
}

