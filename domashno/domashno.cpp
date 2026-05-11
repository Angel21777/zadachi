// zad 1 Пресмятане на лица на фигури с отделни функции + проверка за триъгълника 

#include <iostream>
#include <stdio.h>
#include <math.h>
bool Proverka(int a, int b, int c);
double Triagalnik(int a,int b,int c);
int Pravoagaknik(int a, int b);
float Krug(float r);



int main()
{
	int izbor;
	printf("Izberete figura\n1 - triagalnik\n2 - pravoagalnik\n3 - krug");
	printf("\nVavedete cifrata na figurata: ");
	scanf_s("%d", &izbor);
	switch (izbor)
	{
	case 1:
		double a, b, c;
		printf("a = ");
		scanf_s("%lf", &a);
		printf("b = ");
		scanf_s("%lf", &b);
		printf("c = ");
		scanf_s("%lf", &c);
		Triagalnik(a, b, c);
		break;
	case 2:
		int x, y;
		printf("a = ");
		scanf_s("%d", &x); 
		printf("b = ");
		scanf_s("%d", &y);
		Pravoagaknik(x, y);
		break;
	case 3:
		float r;
		printf("r = ");
		scanf_s("%f", &r);
		Krug(r);
		break;
	default:
		break;
	}
}

bool Proverka(int a, int b, int c)
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

double Triagalnik(int a, int b, int c)
{
	if (Proverka(a,b,c))
	{
		float p = (a + b + c) / 2.0;
		double s;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("S = %.2lf", s);
		return s;
	}
}

int Pravoagaknik(int a, int b)
{
	int s2 = a * b;
	printf("S = %d", s2);
	return s2;
}

float Krug(float r)
{
	float s3 = 3.14 * r * r;
	printf("S = %.2f", s3);
	return s3;
}