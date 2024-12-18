// Lab_work_17_18.10.2024.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <MyFunctions.h>
#include <string.h>

using namespace std;

int main() {
    double summa = sum(3.5, 4.56);
    double neSumma = raznost(12.56, 4.456);

    cout << "Sum: " << summa << endl;
    cout << "Raznost: " << neSumma << endl;

    int n;

    cout << "Enter n for factorial: " << endl;
    cin >> n;
    int factorialnew = factorial(n);
    cout << "Factorial: " << factorialnew << endl;

    char poisknew[] { "Helloitsme" }; 
    int poisktut= poisk(poisknew, 10, 'm');
    cout << "Index: " << poisktut << endl;


        return 0;
}


