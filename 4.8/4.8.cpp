#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int i, j, k;
    double f;
    double min = 0, minI, max, maxI = 1, minI1 = 1, min1, max1, maxI1 = 1;
    double s = 0, s1 = 0, s2 = 0;
    double payDay[3] { 0,0,0 };
    double komis[3] { 0,0,0 };
    int A[3][4] { 
        { 5, 2, 0, 10 },
        {3, 5, 2, 5 }, 
        {20, 0, 0, 0 } 
    };
    double B[4][2] { 
        {1.20,0.50},
        {2.80,0.40},
        {5.00,1.0},
        {2,1.50 } 
    };
    double C[5][5];

    for (i = 0; i < 3; i++) 
        for (j = 0; j < 2; j++) 
        {
            f = 0;
            for (k = 0; k < 4; k++) {
                f += A[i][k] * B[k][j];
                C[i][j] = f;
            }
        }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            payDay[i] = payDay[i] + A[i][j] * B[j][0];
        }
    }
    min = payDay[1];
    for (i = 0; i < 3; i++) {
        if (payDay[i] < min) {
            min = payDay[i];
            minI = i + 1;
        }
    }
    cout << "Меньше всего денег выручил с продажи: " << minI << "-ый продавец." << endl;
    max = payDay[1];
    for (j = k; k < 3; k++) {
        if (payDay[k] > max) {
            max = payDay[k];
            maxI = k + 1;
        }
        else maxI = 1;
    }
    cout << "Больше всего денег выручил с продажи: " << maxI << "-ый продавец.\n\n" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            komis[i] = komis[i] + A[i][j] * B[j][1];
        }
    }
    min1 = komis[1];
    minI1 = 1;
    for (i = 0; i < 3; i++) {
        if (komis[i] < min1) {
            min1 = komis[i];
            minI1 = i + 1;
        }
    }
    cout << minI1 << "-ый продавец получил наименьшие комиссионные." << endl;
    max = komis[1];
    for (j = k; k < 3; k++) {
        if (komis[k] > max) {
            max1 = komis[k];
            maxI1 = k + 1;
        }
    }
    cout << maxI1 << "-ый продавец получил наибольшие комиссионные.\n\n" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            s = s + A[i][j] * B[j][0];
        }
    }
    cout << "Сумма денег, вырученная за проданные товары - " << s << ".\n\n" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            s1 = s1 + A[i][j] * B[j][1];
        }
    }
    cout << "Комиссионные, полученные за проданные товары - " << s1 << "." << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            s2 = s2 + A[i][j] * B[j][1] + B[j][0] * A[i][j];
        }
    }
    cout << "Сумма денег, прошедших через руки продавцов - " << s2 << "." << endl;

    cout << "\n \n \n";
    system("pause");
    return 0;
}