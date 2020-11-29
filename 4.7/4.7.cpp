#include <iostream>
#include <ctime>
using namespace std;


int main()
{
    srand(time(0));
    int s = rand();
    int m = 0;
    int i = 0;
    int c = 0;

    cout << "m = ";
    cin >> m;
    cout << "i = ";
    cin >> i;
    cout << "c = ";
    cin >> c;


    for (int temp = 0; temp < i; temp++) {
        cout << ((m * s + i) % c) << endl;
        s = ((m * s + i) % c);
    }
}