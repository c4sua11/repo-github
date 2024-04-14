#include <iostream>
#include <fstream>
#include <climits>

using namespace std;
// Задание 1
/*
int main() {
    setlocale(LC_ALL, "RU");
    ifstream File("a.txt");
    double num;
    int zero = 0;
    double product = 1.0;

    if (!File) {
        cerr << "Не удалось открыть файл a.txt" << endl;
        return 1;
    }

    while (File >> num) {
        if (num == 0) {
            zero++; // Увеличиваем счетчик нулевых элементов
        }
        else if (num > 0 && num < 1) {
            product *= num; // Умножаем произведение на число, если оно больше 0 и меньше 1
        }
    }

    cout << "Количество нулевых элементов: " << zero << endl;
    cout << "Произведение элементов, меньших 1 и больших 0: " << product << endl;

    File.close();

    return 0;
}
*/
// Задание 2
/*
int main() {
    setlocale(LC_ALL, "RU");
    ifstream File1("a1.txt");
    ifstream File2("a2.txt");
    double num1, num2;
    double product = 1.0;

    if (!File1 || !File2) {
        cerr << "Не удалось открыть один из файлов" << endl;
        return 1;
    }

    // Чтение чисел из обоих файлов и умножение отрицательных элементов
    while (File1 >> num1 && File2 >> num2) {
        if (num1 < 0 && num2 < 0) {
            product *= num1 * num2;
        }
    }

    cout << "Произведение отрицательных элементов двух файлов: " << product << endl;

    File1.close();
    File2.close();

    return 0;
}
*/
// Задание 3
/*
bool isLetter(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

int main() {
    setlocale(LC_ALL, "RU");
    ifstream inputFile("input.txt"); // Открытие входного файла для чтения
    ofstream letterFile("letters.txt"); // Создание файла для записи букв
    ofstream digitFile("digits.txt"); // Создание файла для записи цифр
    char ch;

    if (!inputFile || !letterFile || !digitFile) {
        cerr << "Не удалось открыть один из файлов" << endl;
        return 1;
    }

    // Чтение символов из входного файла и запись их в соответствующие файлы
    while (inputFile.get(ch)) {
        if (isLetter(ch)) {
            letterFile << ch; // Если символ - буква, записываем в файл букв
        }
        else if (isDigit(ch)) {
            digitFile << ch; // Если символ - цифра, записываем в файл цифр
        }
    }

    inputFile.close();
    letterFile.close();
    digitFile.close();

    cout << "Запись завершена." << endl;

    return 0;
}
*/
// Задание 4.

//#include <climits> Для использования константы INT_MIN
/*
int main() {
    setlocale(LC_ALL, "RU");
    ifstream inputFile("numbers.txt"); // Открытие файла для чтения
    int number;
    int maxNegative = INT_MIN; // Инициализация переменной для хранения наибольшего отрицательного числа
    int position = 0; // Позиция числа в файле

    if (!inputFile) {
        cerr << "Не удалось открыть файл" << endl;
        return 1;
    }

    // Чтение чисел из файла и поиск наибольшего отрицательного числа на чётных позициях
    while (inputFile >> number) {
        position++; // Увеличиваем счетчик позиции
        if (position % 2 == 0 && number < 0 && number > maxNegative) {
            maxNegative = number; // Обновляем наибольшее отрицательное число на чётной позиции
        }
    }

    inputFile.close(); // Закрытие файла

    if (maxNegative != INT_MIN) {
        cout << "Наибольший отрицательный компонент на четной позиции: " << maxNegative << endl;
    }
    else {
        cout << "В файле нет отрицательных чисел на четных позициях." << endl;
    }

    return 0;
}
*/

// Задание 5
