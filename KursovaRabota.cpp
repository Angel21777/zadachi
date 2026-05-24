//Курсова работа 
//
//
  

#include <iostream>
#include <stdio.h>
#include <math.h>
const int size = 6;
bool IsTriangle(int a, int b, int c);    //Прототип на функция за проверка страните на триъгълник
double TriangleArea(int a, int b, int c);   //Прототип на функция която намира лицата
void Print(const int size, double Triangles[]);   //Прототип на функция която извежда лицата
double maxArea(const int size,double Triangles[]);  //Прототип на функция която извежда най-голямото лице
void sort(const int size, double Triangles[]);  //Прототип на функция която сортира по големина лицата
int main()
{
	printf("Enter the sides of the triangles\n\n");
	int a, b, c;
	double s;
	double Triangles[size];
	for (int i = 0; i < size; i++)      //Въвеждане на лицата
	{
		printf("Triangle: %d\n", i+1);
		printf("a = ");
		scanf_s("%d",&a);
		printf("b = ");
		scanf_s("%d", &b);
		printf("c = ");
		scanf_s("%d", &c);
		printf("\n");
		Triangles[i] = s = TriangleArea(a, b, c);
	}
    Print(size, Triangles);      //Извикване на функциите
	printf("\n\nTriangles sorted by size:\n");
	sort(size, Triangles);
	Print(size, Triangles);
	double maxnum = maxArea(size, Triangles);
	printf("\n\nMaximum Area = %.2lf\n", maxnum);
}
bool IsTriangle(int a, int b, int c)  //Дефиниция на функция за проверка
{
	if (a+b>c && a+c>b && b+c>a)
	{
		return true;
	}
	else
	{
		return false;
	}
}
double TriangleArea(int a, int b, int c)   //Дефиниция на функция за намиране на лицата
{
	if (IsTriangle(a,b,c))
	{
		double p = (a + b + c) / 2;
		double s;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		return s;
	}
	else
	{
		return 0.0;
	}
}
void Print(const int size, double Triangles[])   //Дефиниция на функция за извеждане на лицата
{
	for (int i = 0; i < size; i++)
	{
		printf("\nTriangle %d = %.2lf", i+1, Triangles[i]);
	}
}
double maxArea(const int size,double Triangles[])  //Дефиниция на функция за намиране на най-голямото лице
{
	double maxnum = 0;
	for (int i = 0; i < size; i++)
	{
		if (Triangles[i]>maxnum)
		{
			maxnum = Triangles[i];
		}
	}
	return maxnum;
}
void sort(const int size, double Triangles[])             //Дефиниция на функция за сортиране
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (Triangles[i]>Triangles[j])
			{
				double areas = Triangles[i];
				Triangles[i] = Triangles[j];
				Triangles[j] = areas;
			}
		}
	}
}
