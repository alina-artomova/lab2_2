#include <iostream>
#include <cmath> //підключення бібліотеки математичних функцій

using namespace std;

int main()
{
    // Завдання 1. Integer15
    cout << "Завдання 1. Integer15.\n";

    int number;
    int hundreds, tens, units;
    int result;

    // Введення тризначного числа
    cout << "Ввести тризначне число: ";
    cin >> number;

    // Знаходимо цифру сотень
    hundreds = number / 100;

    // Знаходимо цифру десятків
    tens = (number / 10) % 10;

    // Знаходимо цифру одиниць
    units = number % 10;

    // Міняємо місцями сотні та десятки
    result = tens * 100 + hundreds * 10 + units;

    // вивід результату
    cout << "Результат: " << result << "\n";



    // Завдання 2. Boolean34
    cout << "\n Завдання 2. Boolean34.\n";

    int x, y;
    bool isWhite;

    // Введення координат поля
    cout << "Введіть x (1-8): ";
    cin >> x;

    cout << "Введіть y (1-8): ";
    cin >> y;

    // Перевіряємо, чи є поле білим
    isWhite = (x + y) % 2 != 0;

    // вивід результату
    cout << "Поле біліє: " << isWhite << "\n";
    
   
   
    // Завдання 3. Math25
    cout << "\n Завдання 3. Math25.\n";

    double x_math;
      
    cout << "Введіть x: ";
    cin >> x_math;

    // Обчислюємо чисельник першого дробу
    double numerator1 = pow(fabs(x_math), 6.0 / 5.0) + sqrt(fabs(2.0 * x_math));
    
    // Число pi
    const double PI = 3.141592653589793;
    
    // Перекладаємо 29 градусів у радіани
    double degrees29 = 29.0 * PI / 180.0;
    
    // Обчислюємо знаменник першого дробу
    double sin_arg = fabs(2.0 * x_math) + degrees29;
    double sin_val = sin(sin_arg);
    double log_arg = sin_val * sin_val; // sin^2

    double denominator1 = log(log_arg) / log(3.0); // log_3(x_math) = ln(x_math)/ln(3)


    // Перший дріб
    double term1 = numerator1 / denominator1;

    // Другий дріб
    double term2 = ( PI * fabs(3.0 * tan(x_math * x_math))) / 5.0;

    // Фінальний розрахунок та виведення результату
    double y_math = term1 + term2;

    cout << "y = " << y_math << endl;


    return 0;
}
