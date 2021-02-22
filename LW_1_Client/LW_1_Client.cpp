#include <iostream>
#include "Library.h"
#include "LibraryReader.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    double a = 0, b = 0, c = 0;
    while (!readDoubleInt(a) || a==0)
    {
        cout << "Ой! Что-то пошло не так, пожалуйсьта повторите ввод.\n";
    }
    while(!readDoubleInt(b) || !readDoubleInt(c))
    {
        cout << "Ой! Что-то пошло не так, пожалуйсьта повторите ввод.\n";
    }
    equation_solution((int)a, (int)b, (int)c);
    system("PAUSE");

}
