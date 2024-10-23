#include <iostream>
#include <string>
#include "scanner.h"

int main() {
    std::string input;
    std::string errorMessage;

    std::cout << "Введіть рядок: ";
    std::cin >> input;

    if (validateString(input, errorMessage)) {
        std::cout << "✓ Рядок відповідає вимогам.\n";
    } else {
        std::cout << "✕ Помилка: " << errorMessage << "\n";
    }

    return 0;
}
