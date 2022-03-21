#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    double x, y;
    cout << "Введите x" << endl;
    cin >> x;
    y = (atan(1 + pow(sin(x), 2)) + log2(1 + exp(-x))) / (sqrt(sqrt(1 + pow(cos(x), 2))));
    cout << "y(x)" << y << endl;
    system("pause");
    return 0;

}
