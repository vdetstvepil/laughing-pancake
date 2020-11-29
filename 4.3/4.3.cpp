#include <iostream>

using namespace std;
double rectS(double a, double b)
{
    return a * b;
}

double triangleS(double a, double h)
{
    return (double(1) / double(2)) * h * a;
}

double circleS(int r)
{
    return double(3.14) * pow(r, 2);
}


int main()
{
    double a = 0, b = 0;
    double h = 0;
    double r = 0;


    cout << "rectangle\n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "S = " << rectS(a, b) << "\n\n";

    cout << "triangle\n";
    cout << "a = ";
    cin >> a;
    cout << "h = ";
    cin >> h;
    cout << "S = " << triangleS(a, h) << "\n\n";

    cout << "circle\n";
    cout << "r = ";
    cin >> r;
    cout << "S = " << circleS(r);
}