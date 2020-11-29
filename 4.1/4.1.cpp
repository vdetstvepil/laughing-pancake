#include <iostream>
#include <fstream>
#include <string>

//Задача «Файл». Создать файл, записать в него 10 чисел, закрыть, потом вновь открыть файл и найти
//сумму чисел
using namespace std;

int main()
{
    ofstream stream("C:\\Users\Anton\\Desktop\\file.txt");
    for (int i = 0; i < 10; i++)
        stream << to_string(i) << endl; //to_string - ф-ция, которая переводит число в строку
    stream.close();

    ifstream stream_in("C:\\Users\Anton\\Desktop\\file.txt");
    string str = "";
    int sum = 0;
    if (stream_in.is_open() == true)
        while (getline(stream_in, str))
            sum = sum + stoi(str); //stoi - ф-ция, которая переводит строку в число

    cout << sum;
}