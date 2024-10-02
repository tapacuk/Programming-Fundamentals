/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Lab 1.8
 */
#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "uk-UA");
    // Перевірка парності числа

    {
        int n; // Число яке потрібно перевірити
        std::cout << "введіть число для перевірки парності: ";
        std::cin >> n;

        if (n % 2 == 0) {
            std::cout << "Число є парним" << std::endl;
        }
        else {
            std::cout << "Число не є парним" << std::endl;
        }
        std::cout << std::endl;
    }

    // Підрахунок кількості одиничних бітів
    {
        int num;
        std::cout << "введіть число для підрахунку одиничних бітів: ";
        std::cin >> num;

        int ones = 0;

        for (int i = 0; i < sizeof(num) * 8; ++i) {
            if (num & (1 << i)) {
                ones++;
            }
        }

        std::cout << "кількість одиничних бітів: " << ones << std::endl << std::endl;
    }

    // Перевірка встановленого біта на певній позиції
    {
        int number, position;

        std::cout << "введіть число: ";
        std::cin >> number;
        std::cout << "введіть позицію біта (починається з 0): ";
        std::cin >> position;
        if (position < 0) {
            std::cout << "ваша позиція меньше нуля або не є числом";
            return 0;
        }

        if ((number & (1 << position)) != 0) {
            std::cout << "біт на позиції " << position << " встановлений, він є 1" << std::endl;
        }
        else {
            std::cout << "біт на позиції " << position << " не встановлений, він є 0" << std::endl;
        }
    }

    return 0;
}
