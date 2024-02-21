#include <Windows.h>
#include <iostream>
using namespace std;


int main()
{
    SetConsoleCP(1251);
    setlocale(0, "");
    double hel[3][5];
    cout << "введите числа в массив\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {   
            cin >> hel[i][j];

        }
    }
    for (int i = 0; i < 3; i++)
    {
        double he = 0;
        cout << "среднее арифметичиское " + i << " строчки: ";
        for (int j = 0; j < 5; j++)
        {
            he = he + hel[i][j];
        }
        he = he / 5;
        cout << he <<"\n";
    }
}

