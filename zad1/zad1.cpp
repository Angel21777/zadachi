// Програма която създава едномерен масив от n на брой целочислени елемента, ако програмта засече
// четен  индекс с четна стойност, стойноста на да се умножи по индекса, ако не остава същото
// въвеждането принтирането и обработката да се извършва чрез функции, потребителя въвежда елемнтите
//

#include <iostream>
#include <stdio.h>
#include <clocale>
const int size = 6;
//void Vavejdane(const int size,int value,int arr[]); Ако използвам 3 аргумента във мейн трябва да декларирам пак value
//и пак да и задам начална стойност
void Vavejdane(const int size,int arr[]);
void Print(const int size, int arr[]);
void Umnojenie(const int size, int arr[]);


int main()
{
    setlocale(LC_ALL, "bulgarian");
	printf("Въведете стойности на масива:\n");
	int arr[size];
	//int valueMain=0;
	Vavejdane(size, arr);
	Print(size, arr);
	printf("\n");
	Umnojenie(size, arr);
	Print(size, arr);
}
void Vavejdane(const int size, int arr[])
{
	int value;
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &value);
		arr[i] = value;
	}
}
void Print(const int size, int arr[])
{
	for (int i = 0; i < size; i++)
	{
		printf("\n arr[%d] = %d", i, arr[i]);
	}
}
void Umnojenie(const int size, int arr[])
{
	for (int i = 1; i < size; i++)
	{
		if (arr[i] % 2 == 0 && i % 2 == 0)
		{
			arr[i] *= i;
		}
	}
}