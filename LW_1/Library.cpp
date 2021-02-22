#include "pch.h" 
#include <utility>
#include <limits.h>
#include "Library.h"
#include "iostream"
using namespace std;

double d, d1, x, y, x0, x1;

double discriminant(long long a, long long b, long long c)
{
	d = pow(b, 2) - 4 * a * c;
	return d;
}


void equation_solution(long long a, long long b, long long c)
{
	d = discriminant(a, b, c);
	d1 = -discriminant(a, b, c);
	x = 0.0;
	y = 0.0;
	if (d > 0)
	{
		cout << "������������ = " << sqrt(d) << ". ������������� ����� ��� ������������ �����." << "\n";
		cout << "������ ������������ ������:" << "\n";
		x = (-b - sqrt(d)) / (2 * a);
		cout << x;
		cout << "\n" << "������ ������������ ������:" << "\n";
		y = (-b + sqrt(d)) / (2 * a);
		cout << y;
		cout << "\n" << "������� ���������� �������.";
	}
	if (d < 0)
	{
		cout << "������������ = -" << sqrt(d1) << ". ������������� ��������� ������������� ������� �� �����." << "\n" << "����� ������ ����������� ������� ���������." << "\n";
		cout << "������ ����������� ������:" << "\n";
		x0 = -(double)b / (2 * a);
		x1 = sqrt(d1) / (2 * a);
		cout << "x = " << x0 << " + i * " << x1 << endl;
		cout << "\n" << " ������ ������������ ������:" << "\n";
		cout << "x = " << x0 << " - i * " << x1 << endl;
		cout << "\n" << "������� ���������� �������.";
	}
	if (d == 0)
	{
		cout << "������������ = " << d << ". ������������� ����� ���� ������������ ������:" << "\n";
		x = (-b) / (2 * a);
		cout << x << "\n" << "������� ���������� �������.";
	}
}