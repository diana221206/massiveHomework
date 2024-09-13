// массивы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//task 1
#include <iostream>
using namespace std;
int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    cout << "Введите 5 чисел" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
        cout << "Массив в обратном порядке:" <<
            endl;
        for (int i = SIZE - 1; i >= 0; i--) {
            cout << numbers[i] << " ";
            cout << endl;
            return 0;
        }


    }
}

//task 2
int b[20];
for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++)
{
    b[i] = randInt(0, 9);

}
for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++)
{
    if (i % 2) == 0)
    {
        cout << b[i] << endl;

    }

}

//task3
int sum = 0;
int c[10];
for (int i = 0; i < sizeof(c) / sizeoff(c[0]); i++)
{
    c[i] randInt(-20, 20);
    for (int i = 0); i < sizeof(c) / sizeof(c[0]); i++)

    if (i % 2 == 0)
    {

        cout << c[i] << endl;
    }
}

//task 4
int sum1 = 0;
int sum2 = 0;
int c[10];
for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
{
    c[i] = randInt(-5, 5);
    for int i = 0; i < sizeof(c) / sizeof(c[0]); i++)

    cout << c[1] << " ";
    for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)

        if (c[i]) >= 0)
        {
        }    sum1 = sum1 + c[i];
        else
        {
            sum2 = sum2 + c[i];
        }
        cout << endl << endl << sum1 << endl
        cout << endl << sum2 << endl;
}