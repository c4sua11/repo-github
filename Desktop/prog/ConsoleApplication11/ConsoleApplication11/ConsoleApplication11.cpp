#include <iostream>
#include <string>
#include <sstream>

using namespace std;
// Задание 1.
/*
class Coin {
private:
    int denomination; // Поле 1: Номинал монеты
    int quantity; // Поле 2: Количество монет

public:
    // Конструктор для инициализации объекта
    Coin(int denom = 0, int quant = 0) : denomination(denom), quantity(quant) {}

    // Функция формирования строки с информацией об объекте
    string getInfo() const {
        stringstream ss;
        ss << "Номинал монеты: " << denomination << ", Количество монет: " << quantity;
        return ss.str();
    }

    // Функция обработки значений полей - вычисление суммы монет
    int calculateSum() const {
        return denomination * quantity;
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    // Создаем объект класса Coin с заданными полями
    Coin coin(5, 10); // Номинал монеты: 5, Количество монет: 10

    // Выводим информацию о монете
    cout << "Информация о монете: " << coin.getInfo() << endl;

    // Вычисляем сумму монет и выводим
    cout << "Сумма монет: " << coin.calculateSum() << endl;

    return 0;
}
*/
// Задание 2.
/*
class Date {
private:
    int day;
    int month;
    int year;

public:
    // Конструктор по умолчанию
    Date() : day(1), month(1), year(2000) {}

    // Конструктор перезагрузки с параметрами
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Деструктор для освобождения памяти
    ~Date() {
        cout << "Объект класса Date уничтожен" << endl;
    }

    // Функция для увеличения года на 1
    void increaseYear() {
        year++;
    }

    // Функция для уменьшения даты на 2 дня
    void decreaseDate() {
        day -= 2;
        if (day < 1) {
            if (month == 3 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) {
                // Високосный год
                day += 29;
                month--;
            }
            else if (month == 3) {
                // Не високосный год
                day += 28;
                month--;
            }
            else if (month == 1 || month == 2 || month == 4 || month == 6 || month == 8 || month == 9 || month == 11) {
                day += 31;
                month--;
            }
            else {
                day += 30;
                month--;
            }
        }
    }

    // Функция формирования строки информации об объекте
    string getInfo() const {
        return to_string(day) + "." + to_string(month) + "." + to_string(year);
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    // Создание объекта с помощью конструктора по умолчанию
    Date date1;
    cout << "Дата 1: " << date1.getInfo() << endl;

    // Создание объекта с помощью конструктора перезагрузки
    Date date2(25, 12, 2023);
    cout << "Дата 2: " << date2.getInfo() << endl;

    // Увеличение года на 1
    date1.increaseYear();
    cout << "Дата 1 после увеличения года: " << date1.getInfo() << endl;

    // Уменьшение даты на 2 дня
    date2.decreaseDate();
    cout << "Дата 2 после уменьшения на 2 дня: " << date2.getInfo() << endl;

    return 0;
}
*/