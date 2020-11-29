#include <iostream>
#include <iostream>
using namespace std;

char digitTo(int num)
{
	switch (num) {
	case 0: return '0';
	case 1: return '1';
	case 2: return '2';
	case 3: return '3';
	case 4: return '4';
	case 5: return '5';
	case 6: return '6';
	case 7: return '7';
	case 8: return '8';
	case 9: return '9';
	case 10: return 'A';
	case 11: return 'B';
	case 12: return 'C';
	case 13: return 'D';
	case 14: return 'E';
	case 15: return 'F';
	}
}

int digitFrom(char num)
{
	switch (num) {
	case '0': return 0;
	case '1': return 1;
	case '2': return 2;
	case '3': return 3;
	case '4': return 4;
	case '5': return 5;
	case '6': return 6;
	case '7': return 7;
	case '8': return 8;
	case '9': return 9;
	case 'A': return 10;
	case 'B': return 11;
	case 'C': return 12;
	case 'D': return 13;
	case 'E': return 14;
	case 'F': return 15;
	}
}

int main()
{
	string str = "";
	int a = 0, b = 0;
	cout << "Convert number str = ";
	cin >> str;
	cout << " from the number system a = ";
	cin >> a;
	cout << " to the number system b = ";
	cin >> b;

	int num = 0;
	for (int i = 0, j = str.size() - 1; i < str.size(); i++, j--)
	{
		double x = pow(double(a), double(j));
		num = num + int(x) * digitFrom(str[i]);
	}

	str = "";
	while (num != 0)
	{
		str = str + digitTo(num % b);
		num = num / b;
	}
	reverse(str.begin(), str.end());
	cout << "Converted number str = " << str;

}