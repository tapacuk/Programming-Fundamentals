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
		cout << "���������� ��������" << endl;

		int arr[10];
		for (int i = 0; i < 10; i++) {
			if (i % 2 == 0) {
				arr[i] = i + 5;
			}
			else {
				arr[i] = i - 5;
			}
		}

		cout << "����� �� ����������:";
		for (int i = 0; i < 10; i++) {
			cout << arr[i] << ", ";
		}
		cout << endl;

		int n = sizeof(arr) / sizeof(arr[0]);
		sort(arr, arr + n);
		cout << "����� ���� ����������:";
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

		cout << "��������� �����ֲ� ��� ��������" << endl;

		cout << "������ �����: ";
		for (int i = 0; i < 10; i++) {
			arr1[i] = 120 - i;
			cout << arr1[i] << " ";
		}
		cout << endl;

		cout << "������ �����: ";
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
		cout << "������� �������� �� ������ �� 115: " << n << endl;
		cout << endl;
	}

	//task3
	{
		cout << "���������� ������� ������̲����� ������" << endl;
		int arr1[4][4];
		int arr2[4][5];

		srand(static_cast<int>(time(0)));

		/*
		* ���� ��� ���������� ����������� ������� ������
		* �������� ������ ������������ ������ �� 201 ��� �������� ����� ��� ���� ����� ������ �� 201
		* ��� ������ ������� 100 ��� ������ ����� � ������� �� -100 �� 100
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


		cout << "������ �����:" << endl;
		for (int i = 0; i < 4; ++i) {
			for (int j = 0; j < 4; ++j) {
				cout << arr1[i][j] << "\t"; // ���� ������ � ����������
			}
			cout << endl;
		}

		cout << "������ �������� ������� ������� ������� ������: ";
		for (int i = 0; i < 4; i++) {
			if (arr1[i][i] > 0) {
				cout << arr1[i][i] << " ";
			}
		}
		cout << "\n\n";


		cout << "������ �����:" << endl;
		for (int i = 0; i < 4; ++i) {
			for (int j = 0; j < 5; ++j) {
				cout << arr2[i][j] << "\t";
			}
			cout << endl;
		}

		cout << "������� �������� � �������� ������� ������: " << endl;
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