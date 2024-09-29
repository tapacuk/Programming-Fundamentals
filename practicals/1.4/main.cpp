/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Practical 1.4
 */

#include <iostream>
#include <cmath>  // дл€ 5 завданн€

// «ј¬ƒјЌЌя 1
int main() {
	int sum = 0;

	for (int i = 1; i <= 5; i++) {
		sum += i;
	}
	std::cout << "–езультат:" << sum << std::endl;
}

// «ј¬ƒјЌЌя 2
int main() {
	int n;
	long factorial = 1;

	if (n < 0){
		return 0; // ќск≥льки в≥дТЇмного фактор≥алу не ≥снуЇ
	}
	else {
		for (int i = 1; i <= n; i++) {
			factorial *= i;
			std::cout << "‘актор≥ал n дор≥внюЇ" << factorial << std::endl;
		}
	}
}

// «ј¬ƒјЌЌя 3
int main() {
	int n;
	int sum = 0;

	for (int i = 0; i <= n; i += 2) {
		sum += i;
	}

	std::cout << "–езультат =" << sum << std::endl;
}

// «ј¬ƒјЌЌя 4
int main() {
	int n;
	int mul;
	long prev = 1;
	int d; // р≥зниц€
	int a1 // перший член прогрес≥њ

	for (int i = 0; i < n; i++) {
        mul = a1 + i * d; 
		prev *= mul;
    }

	std::cout << "ƒобуток перших елемент≥в прогрес≥њ = " << prev << std::endl;
}

// «ј¬ƒјЌЌя 5
int main() {
	double x;
	double k = 0.01; // крок
	double pi = M_PI

	for (x = 0; x <= pi; x += k) {
	}
}