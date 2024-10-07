/**
* Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Prac. 1.6
 */
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    // Задано ціле значення А. Визначити, яких бітів (0 чи 1) більше в його двійковому поданні
    {
        int A;
        cout << "Введіть число: ";
        cin >> A;

        // лічильники для бітів
        int zeros = 0;
        int ones = 0;

        // цикл для перевірки бітів
        // sizeof(A) * 8 - використовуємо для перевірки бітів для всіх можливих типів
        for (int i = 0; i < sizeof(A) * 8; ++i) {
            if (A & (1 << i)) {
                ones++;
            }
            else {
                zeros++;
            }
        }

        if (ones > zeros) {
            cout << "Одиничних бітів більше: " << ones << endl;
        }
        else if (zeros > ones) {
            cout << "Нулевих бітів більше: " << zeros << endl;
        }
        else {
            cout << "Кількість бітів однакова: " << zeros << " і " << ones << endl;
        }

        // Задано дві послідовності, які складаються з 0 та 1 Скласти специфікацію для моделювання операцій XOR.
        {
            int a[] = { 1, 0, 1, 1, 1, 0 };
            int b[] = { 0, 1, 1, 0, 1, 1 };
            int result[6];
            int n = 6;  // довжина послідовностей щоб записати в умову циклу

            for (int i = 0; i < n; i++) {
                result[i] = a[i] ^ b[i];
                cout << result[i] << " ";
            }
        }

    }
}
