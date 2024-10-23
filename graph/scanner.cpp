#include "scanner.h"

// перевірка на правильність рядка
bool validateSubstring(const std::string& sub, std::string& errorMessage) {
    if (sub.empty()) { // перевіряємо, що підрядок не пустий
        errorMessage = "Підрядок пустий.";
        return false;
    }

    if (sub[0] != '$') { // перевіряємо, що перший символ підрядка це $
        errorMessage = "Підрядок має починатися із символу '$'.";
        return false;
    }

    // перевіряємо інші символи (починаючи з другого символа)
    // size_t приберає проблеми з перебором індекса
    for (size_t i = 1; i < sub.size(); ++i) {
        char c = sub[i];
        // чи символ не входить у діапазони '0..9' або 'A..F'
        if (!((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F'))) {
            errorMessage = "Символ '" + std::string(1, c) + "' неприпустимий. "
                           "Дозволено тільки символи '0..9' та 'A..F'.";
            return false;
        }
    }

    return true;
}

bool validateString(const std::string& s, std::string& errorMessage) {
    // шукаємо в стрінгу символ :
    size_t colonPos = s.find(':');
    // якщо двокрапка не в рядку то. нпос це метод яка знаходить чи немає цього в рядку
    if (colonPos == std::string::npos) {
        errorMessage = "Рядок має містити символ ':', що розділяє підрядки.";
        return false;
    }

    // розбиваємо рядки на два підрядки для перевірки правильності кожного
    std::string firstSub = s.substr(0, colonPos); // беремо певний відрізок з стрінга, в цьому випадку до : включно
    std::string secondSub = s.substr(colonPos + 1); // беремо частину після :

    // сама перевірка на помилки в рядках
    if (!validateSubstring(firstSub, errorMessage)) {
        errorMessage = " Помилка в першому підрядку: " + errorMessage;
        return false;
    }

    if (!validateSubstring(secondSub, errorMessage)) {
        errorMessage = "Помилка в другому підрядку: " + errorMessage;
        return false;
    }

    return true;
}
