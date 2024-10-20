#include <iostream>
#include <cmath> // підключення математичних функцій
using namespace std;

// Головна функція програми
int main() {
    // Integer16 - Перестановка цифр десятків і одиниць у тризначному числі
    int number, hundreds, tens, ones, new_number;
    cout << "Enter a three-digit number: ";
    cin >> number;

    // Отримаємо сотні, десятки та одиниці
    hundreds = number / 100;     // перша цифра (сотні)
    tens = (number / 10) % 10;   // друга цифра (десятки)
    ones = number % 10;          // третя цифра (одиниці)

    // Перестановка десятків і одиниць
    new_number = hundreds * 100 + ones * 10 + tens;
    cout << "New number after swapping tens and ones: " << new_number << endl;

    // Boolean34 - Перевірка кольору поля шахівниці
    int x, y;
    cout << "Enter the x coordinate (1-8) of the chessboard: ";
    cin >> x;
    cout << "Enter the y coordinate (1-8) of the chessboard: ";
    cin >> y;

    // Перевіряємо, чи поле є білим
    bool is_white = (x + y) % 2 == 0;
    cout << "The field is white: " << boolalpha << is_white << endl;

    // Математична функція
    double input_x, result_y, numerator, denominator;

    // Введення значення для обчислення функції
    cout << "Enter the value of x for the mathematical function: ";
    cin >> input_x;

    // Чисельник: 3 * log2(fabs(pow(x, 2)) + sqrt(pow(x, 2) * pow(sin(input_x), 2) * pow(cos(input_x), 3)))
    numerator = 3 * log2(fabs(pow(input_x, 2)) + sqrt(pow(input_x, 2) * pow(sin(input_x), 2) * pow(cos(input_x), 3)));

    // Знаменник: cos(input_x) + 0.5 * sqrt(input_x + 5)
    denominator = cos(input_x) + 0.5 * sqrt(input_x + 5);

    // Обчислення результату функції
    result_y = numerator / denominator;

    // Виведення результату
    cout << "Result of the function: " << result_y << endl;

    return 0;
}
