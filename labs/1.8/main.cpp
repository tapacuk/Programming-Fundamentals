/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Lab 1.8
 */
#include <iostream>


// ----------------------------
// Перевірка парності числа
// ----------------------------
int main(){
    int n; // Число яке потрібно перевірити
    std::cout << "Введіть число: ";
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << "Число є парним" << std::endl;
    } else {
        std::cout << "Число не є парним" << std::endl;
    }
}


// ----------------------------
// Підрахунок кількості одиничних бітів
// ----------------------------
int countBits(int n) {
    int count = 0; // Зберігає кількість одиничних бітів 

    for (; n > 0; n >>= 1) { 
        count += n & 1; // Перевірка останнього біта
    }

    return count;
}

int main() {
    int n;

    std::cout << "Введіть число: ";
    std::cin >> n;

    int result = countBits(n);
    std::cout << "Кількість одиничних бітів у числі " << n << " = " << result << std::endl;

    return 0;
}


// ----------------------------
// Перевірка встановленого біта
// ----------------------------

bool isBitSet(int n, int pos) {
    return (n & (1 << pos)) != 0; // Зсув біта та перевірка побітовим оператором
}

int main() {
    int n, pos;

    std::cout << "Введіть число: ";
    std::cin >> n;
    std::cout << "Введіть позицію біту: ";
    std::cin >> pos;

    // Перевіряємо, чи біт на певній позиції встановлений
    if (isBitSet(n, pos)) {
        std::cout << "Біт на позиції " << pos << " встановлений." << std::endl;
    } else {
        std::cout << "Біт на позиції " << pos << " не встановлений." << std::endl;
    }

    return 0;
}
