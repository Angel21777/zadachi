// Всеки елемент на масива се умножава по неговия индекс
//

#include <iostream>
#include <stdio.h>
const int N = 4;

int main()
{
	int mA[N];
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &mA[i]);
		mA[i] *= i;
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d ", mA[i]);
	}
}

