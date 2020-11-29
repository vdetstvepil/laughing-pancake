#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib> // Для работы с функцией system()

using namespace std;
int main()
{
    for (int i = 0; i < 100; i++)
    {
        COORD pos = { i , 10 + (int)(10 * sin(double(3.14) / double(12) * double(i))) }; //позиция x и y
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleCursorPosition(hConsole, pos);

        cout << "*";
    }
    for (int y = 0; y < 20; y++)
    {
        COORD pos = { 0, y };
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleCursorPosition(hConsole, pos);
        cout << "|";
    }
    for (int x = 0; x < 100; x++)
    {
        COORD pos = { x, 10 };
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleCursorPosition(hConsole, pos);
        cout << "-";
    }

    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
}
