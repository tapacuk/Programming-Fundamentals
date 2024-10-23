<div align="center">
    <h1>Розрахунково-графічна робота</h1>
    <h3></h3>
</div>
<br/>

### Що це та як працює?
Скрипт для перевірки рядків на відповідність правилам. Програма перевіряє рядки на відповідність за правилами:
- Рядок має складатися з двох підрядків, розділених символом «:».
- Кожен підрядок має починатися із символу «$».
- Після символу «$» можуть слідувати тільки символи з діапазонів 0..9 і A..F.

Програма повідомляє про помилки в разі невідповідності правилу та виводить відповідні повідомлення.
<br/>

### Структура та функцiонал
#### _`scanner.h`_
Файл `scanner.h` — заголовний, потрібен для того, щоб описати інтерфейси (прототипи) функцій, які будуть використовуватися в програмі. Скрипт використовує лише дві булевi функції, це `validateSubstring` та `validateString` які використовуються для перевірки підрядків і рядків.

```C++
#ifndef SCANNER_H
#define SCANNER_H

#include <string>

// Функція перевірки підрядка
bool validateSubstring(const std::string& sub, std::string& errorMessage);

// Функція перевірки рядка з поділом на підрядки
bool validateString(const std::string& s, std::string& errorMessage);

#endif // SCANNER_H
```

Директиви препроцесора `#ifndef SCANNER_H` і `#define SCANNER_H` допомагають уникнути багаторазового включення одного й того самого заголовного файлу в інші файли програми. Інакше кажучи «захистом від повторного включення».
<br/>

#### _`scanner.cpp`_
Файл `scanner.cpp` — реалізація функцій, оголошених у заголовному файлі. У ньому перевіряємо підрядки та рядки на відповідність правилам.

```C++
#include "scanner.h"

bool validateSubstring(const std::string& sub, std::string& errorMessage) {
    if (sub.empty()) { // Перевіряємо, що підрядок не порожній
        errorMessage = "Підрядок пустий.";
        return false;
    }

    if (sub[0] != '$') { // Перевіряємо, що перший символ підрядка - це '$'
        errorMessage = "Підрядок має починатися із символу '$'.";
        return false;
    }

    // Перевіряємо інші символи (починаючи з другого)
    for (size_t i = 1; i < sub.size(); ++i) {
        char c = sub[i];
        // Якщо символ не входить у діапазони '0..9' або 'A..F', то це помилка
        if (!((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F'))) {
            errorMessage = "Символ '" + std::string(1, c) + "' неприпустимий. "
                           "Дозволено тільки символи '0..9' та 'A..F'.";
            return false;
        }
    }

    return true; // Якщо всі перевірки пройдено, повертаємо true
}

bool validateString(const std::string& s, std::string& errorMessage) {
    // Шукаємо символ поділу ':'
    size_t colonPos = s.find(':');
    if (colonPos == std::string::npos) {
        errorMessage = "Рядок має містити символ ':', що розділяє підрядки.";
        return false;
    }

    // Розбиваємо рядок на два підрядки
    std::string firstSub = s.substr(0, colonPos);  // Підрядок до ':'
    std::string secondSub = s.substr(colonPos + 1);  // Підрядок після ':'

    // Перевіряємо перший підрядок
    if (!validateSubstring(firstSub, errorMessage)) {
        errorMessage = " Помилка в першому підрядку: " + errorMessage;
        return false;
    }

    // Перевіряємо другий підрядок
    if (!validateSubstring(secondSub, errorMessage)) {
        errorMessage = "Помилка в другому підрядку: " + errorMessage;
        return false;
    }

    return true; // Якщо обидва підрядки допустимі, повертаємо true
}
```
<br/>

#### _`main.cpp`_
Файл `main.cpp` — основний скрипт. Тут реалізовано логіку взаємодії з користувачем. Основна програма запитує в користувача введення рядка, викликає функцію перевірки та виводить результат.

```C++
#include <iostream>
#include <string>
#include "scanner.h"

int main() {
    std::string input;  // Рядок для введення
    std::string errorMessage;  // Повідомлення про помилку

    std::cout << "Введіть рядок: ";  // Виведення запиту
    std::cin >> input;  // Введення рядка

    // Перевіряємо рядок
    if (validateString(input, errorMessage)) {
        std::cout << "✓ Рядок відповідає вимогам.\n";
    } else {
        std::cout << "✕ Помилка: " << errorMessage << "\n";
    }

    return 0;
}
```
<br/>

### Компіляція та приклади роботи
Для побудови программи можно використовувати `g++`. 

```bash
g++ -o scanner main.cpp scanner.cpp
```
