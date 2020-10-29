﻿#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    long long s, l1, r1, l2, r2;

    std::cout << "Введите сумму, границы первого промежутка и границы второго промежутка на одной строке через пробел" << std::endl;
    std::cin >> s >> l1 >> r1 >> l2 >> r2;

    bool success = true;
    int x1 = l1;
    int x2;

    if (x1 + r2 < s) {
        // Значит, если увеличить х2 на максимум
        // x1 + x2 всё равно меньше s
        x2 = r2;

        // Если r1 + r2 меньше s
        // тогда s больше максимально возможной суммы иксов
        if (s > r1 + x2) {
            std::cout << "Нет таких иксов" << std::endl;
            success = false;
        }
        else {
            // Иначе ищем х1 такой, чтобы x1 + x2 = s
            x1 = s - r2;
        }
    }
    else {
        // Здесь мы понимаем, что x1 + r2 > s
        // Два варианта: 1. s меньше минимальной суммы иксов
        //               2. s возможно получить суммой иксов

        // Проверяем первый варииант
        if (s < l1 + l2) {
            std::cout << "Нет таких иксов" << std::endl;
            success = false;
        }
        else {
            // Здесь s можно получить суммой иксов
            x2 = s - x1;
        }
    }

    if (success) {
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }
}