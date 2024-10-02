/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Lab 1.8
 */
#include <iostream>

int main() {
    setlocale(LC_ALL, "uk-UA");
    // оператор вибору if, else, else if
    int num;
    std::cout << "введіть число: ";
    std::cin >> num;

    if (num > 0) {
        std::cout << "число додатнє" << std::endl;
    }
    else if (num < 0) {
        std::cout << "число від'ємне" << std::endl;
    }
    else if (num == 0) {
        std::cout << "число дорівнює нулю" << std::endl;
    }
    else {
        std::cout << "ви ввели не число" << std::endl;
    }
    std::cout << std::endl;

    // оператор вибору switch
    char option;
    std::cout << "виберіть опцію: a, b, c: ";
    std::cin >> option;

    switch (option) {
    case 'a':
        std::cout << "ви вибрали опцію A" << std::endl;
        break;
    case 'b':
        std::cout << "ви вибрали опцію B" << std::endl;
        break;
    case 'c':
        std::cout << "ви вибрали опцію C" << std::endl;
        break;
    default:
        std::cout << "невідома опція" << std::endl;
        break;
    }
    std::cout << std::endl;

    // цикл while
    int counter = 1;
    std::cout << "наведення циклу while (від 1 до 5): ";
    while (counter <= 5) {
        std::cout << counter << " ";
        counter++;
    }
    std::cout << std::endl << std::endl;

    // цикл do, while
    int number;
    std::cout << "цикл do-while. введіть число яке більше нуля: ";
    do {
        std::cin >> number;
        if (number <= 0) {
            std::cout << "видно, ваше число меньше нуля. спробуйте ще раз: ";
        }
    } while (number <= 0);
    std::cout << "ви ввели: " << number << std::endl;
    std::cout << std::endl;


    // цикл for
    std::cout << "цикл for (від 1 до 5): ";
    for (int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}