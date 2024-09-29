/**
* Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Prac. 1.5
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    {
        // Задано послідовність значень А[n] і деяке значення P. Знайти індекс першого входження Р у послідовність А[n].
        vector<int> arr = { 24, 57, 364, 597, 31 }; // послідовність значень A[n]

        int P;
        cout << "Введіть число P" << endl;
        cin >> P;

        int indexP;
        // цикл для перевірки всіх значень в масиві arr
        for (int i = 0; i < arr.size(); i++) {
            // перевіряємо чи введене значення є в масиві, якщо є, перериваємо і виводимо індекс
            if (P == arr[i]) { 
                indexP = i;
                break;
            }
        }
        cout << indexP << endl;
    }

    {
        // Задано послідовність значень А[n]. Знайти найменше значення серед додатних елементів послідовності А[n]
        vector<int> arr = { 56, 24, 57, -34, 54, 31, -72 }; // послідовність значень A[n]

        // записуємо перше число в масиві
        int minVal = arr[0];

        for (int i = 1; i < arr.size(); i++){
            // цикл на перевірку додатніх елементів
            if (arr[i] >= 0){
                // цикл на перевірку додатнього значення
                if (minVal > arr[i]) {
                    minVal = arr[i];
                // якщо значення з теперішнім індексом більше ніж теперішнє значення minVal, запсуємо в minVal значення індекса
                // таким чином продовжуємо цикл і знаходимо найменьше значення 
                }
            }
        }
        cout << "найменьше значення в послідовності" << minVal << endl;
    }

    {
        // Задано послідовність значень А[n]. Знайти найбільше і найменше значення та поміняти їх місцями. 
        vector<int> arr = { 56, 24, 57, -34, 54, 31, -72 }; // послідовність значень A[n]

        int minVal = arr[0];
        int maxVal = arr[0];

        int indexMin;
        int indexMax;
        

        for (int i = 1; i < arr.size(); i++){
            // перевірка на найменьше значення
                if (minVal > arr[i]) {
                    minVal = arr[i];
                    indexMin = i;
                }
            // перевірка на найбільше значення
                if (maxVal < arr[i]) {
                    maxVal = arr[i];
                    indexMax = i;
                }
        }

        cout << "значення до зміни" << endl;
        for (int i = 0; i < arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << "" << endl;

        arr[indexMin] = maxVal;
        arr[indexMax] = minVal;

        cout << "значення після зміни" << endl;
        for (int i = 0; i < arr.size(); i++){
            cout << arr[i] << " ";
        }
    }
}