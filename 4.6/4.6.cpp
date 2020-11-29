#include <iostream>

using namespace std;
int main()
{
    char str[100];
    for (int i = 0; i < 100; i++)
        str[i] = NULL;

    cout << "enter number = ";
    cin.getline(str, 100);

    int number = 0;
    for (int i = 0; i < 100; i++)
    {
        if (str[i] == NULL)
            break;

        switch (str[i])
        {
        case 'I':
            if (i + 1 < strlen(str) && (str[i + 1] == 'V' || str[i + 1] == 'X' || str[i + 1] == 'C' || str[i + 1] == 'M'))
                number = number - 1;
            else number = number + 1;
            break;

        case 'V':
            number = number + 5;
            break;

        case 'X':
            if (i + 1 < strlen(str) && (str[i + 1] == 'L' || str[i + 1] == 'C' || str[i + 1] == 'M'))
                number = number - 10;
            else number = number + 10;
            break;

        case 'L':
            number = number + 50;
            break;

        case 'C':
            if (i + 1 < strlen(str) && (str[i + 1] == 'D' || str[i + 1] == 'M'))
                number = number - 100;
            else number = number + 100;
            break;

        case 'D':
            number = number + 500;
            break;

        case 'M':
            number = number + 1000;
            break;
        }
    }

    cout << number << endl;

}