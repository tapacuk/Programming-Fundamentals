/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko :3
 * Student Group: 121
 * Lab 2.1
 * Variant: 5
 */
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>  

using namespace std;

int main() {
	setlocale(LC_ALL, "uk-UA");
	//task 1
	{
		cout << "СОРТУВАННЯ ЗНАЧЕННЬ" << endl;

		int arr[10];
		for (int i = 0; i < 10; i++) {
			if (i % 2 == 0) {
				arr[i] = i + 5;
			}
			else {
				arr[i] = i - 5;
			}
		}

		cout << "Масив до сортування:";
		for (int i = 0; i < 10; i++) {
			cout << arr[i] << ", ";
		}
		cout << endl;

		int n = sizeof(arr) / sizeof(arr[0]);
		sort(arr, arr + n);
		cout << "Масив після сортування:";
		for (int i = 0; i < n; i++) {
			cout << arr[i] << ", ";
		}
		cout << endl;
		cout << endl;
	}

	//task2
	{
		int arr1[10];
		int arr2[10];
		int arr3[10];

		cout << "ВИКОНАННЯ ОПЕРАЦІЇ НАД МАСИВАМИ" << endl;

		cout << "перший масив: ";
		for (int i = 0; i < 10; i++) {
			arr1[i] = 120 - i;
			cout << arr1[i] << " ";
		}
		cout << endl;

		cout << "другий масив: ";
		for (int i = 0; i < 10; i++) {
			arr2[i] = 110 + i;
			cout << arr2[i] << " ";
		}
		cout << endl;

		int n = 0;

		for (int i = 0; i < 10; i++) {
			if (arr1[i] < 115) {
				n++;
			}
			if (arr2[i] < 115) {
				n++;
			}
		}
		cout << "кількість елементів які меньші за 115: " << n << endl;
		cout << endl;
	}

	//task3
	{
		cout << "ОБЧИСЛЕННЯ ЗНАЧЕНЬ ДВОХВИМІРНИГО МАСИВУ" << endl;
		int arr1[4][4];
		int arr2[4][5];

		srand(static_cast<int>(time(0)));

		/*
		* цикл для заповнення випадковими числами масиву
		* спочатку робимо цілочисельне ділення на 201 щоб отримати число яке буде точно меньше за 201
		* далі просто віднімаємо 100 щоб вийшли числа в діапазоні від -100 до 100
		*/
		for (int i = 0; i < 4; i++) {
			for (int l = 0; l < 4; l++)
			{
				arr1[i][l] = rand() % 201 - 100;
			}
		}

		for (int i = 0; i < 4; i++) {
			for (int l = 0; l < 5; l++)
			{
				arr2[i][l] = rand() % 201 - 100;
			}
		}


		cout << "перший масив:" << endl;
		for (int i = 0; i < 4; ++i) {
			for (int j = 0; j < 4; ++j) {
				cout << arr1[i][j] << "\t"; // вивід масива з табуляцією
			}
			cout << endl;
		}

		cout << "додатні значення головної діагоналі першого масиву: ";
		for (int i = 0; i < 4; i++) {
			if (arr1[i][i] > 0) {
				cout << arr1[i][i] << " ";
			}
		}
		cout << "\n\n";


		cout << "другий масив:" << endl;
		for (int i = 0; i < 4; ++i) {
			for (int j = 0; j < 5; ++j) {
				cout << arr2[i][j] << "\t";
			}
			cout << endl;
		}

		cout << "мінімальні значення в стовбцях першого масиву: " << endl;
		cout << "[0]\t[1]\t[2]\t[3]\t[4]" << endl;
		for (int i = 0; i < 5; i++) {
			int min = arr2[0][i];

			for (int j = 1; j < 4; j++) {
				if (arr2[j][i] < min) {
					min = arr2[j][i];
				}
			}
			cout << min << "\t";

		}
	}
}
