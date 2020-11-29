#include <iostream>
#include <fstream>
#include <string>

using namespace std;
/*
* * * * * * * * = = = = = = =
* * * * * * * * = = = = = = =
* * * * * * * * = = = = = = =
* * * * * * * * = = = = = = =
* * * * * * * * = = = = = = =
* * * * * * * * = = = = = = =
* * * * * * * * = = = = = = =
= = = = = = = = = = = = = = =
= = = = = = = = = = = = = = =
= = = = = = = = = = = = = = =
= = = = = = = = = = = = = = =
= = = = = = = = = = = = = = =
= = = = = = = = = = = = = = =
= = = = = = = = = = = = = = =
*/
int main()
{
    for (int i = 0; i < 14; i++)
    {
        if (i < 7)
            for (int k = 0; k < 7; k++)
                cout << "* ";
        else
            for (int k = 0; k < 7; k++)
                cout << "= ";
        for (int k = 7; k < 14; k++)
            cout << "= ";

        cout << endl;
    }
}