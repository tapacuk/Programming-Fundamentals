/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Practical 1.4
 */

#include <iostream>
#include <cmath>  // ��� 5 ��������

// �������� 1
int main() {
	int sum = 0;

	for (int i = 1; i <= 5; i++) {
		sum += i;
	}
	std::cout << "���������:" << sum << std::endl;
}

// �������� 2
int main() {
	int n;
	long factorial = 1;

	if (n < 0){
		return 0; // ������� �䒺����� ��������� �� ����
	}
	else {
		for (int i = 1; i <= n; i++) {
			factorial *= i;
			std::cout << "�������� n �������" << factorial << std::endl;
		}
	}
}

// �������� 3
int main() {
	int n;
	int sum = 0;

	for (int i = 0; i <= n; i += 2) {
		sum += i;
	}

	std::cout << "��������� =" << sum << std::endl;
}

// �������� 4
int main() {
	int n;
	int mul;
	long prev = 1;
	int d; // ������
	int a1 // ������ ���� �������

	for (int i = 0; i < n; i++) {
        mul = a1 + i * d; 
		prev *= mul;
    }

	std::cout << "������� ������ �������� ������� = " << prev << std::endl;
}

// �������� 5
int main() {
	double x;
	double k = 0.01; // ����
	double pi = M_PI

	for (x = 0; x <= pi; x += k) {
	}
}