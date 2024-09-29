/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Practical 1.4
 */

#include <iostream>
#include <cmath>  // для 5 завдання


int main() {
	// ЗАВДАННЯ 1
	{
		int sum = 0;
	
		for (int i = 1; i <= 5; i++) {
			sum += i;
		}
		std::cout << "Результат:" << sum << std::endl;
	}
	
	// ЗАВДАННЯ 2
	{
		int n;
		long factorial = 1;
	
		if (n < 0){
			return 0; // Оскільки від’ємного факторіалу не існує
		}
		else {
			for (int i = 1; i <= n; i++) {
				factorial *= i;
				std::cout << "Факторіал n дорівнює" << factorial << std::endl;
			}
		}
	}
	
	// ЗАВДАННЯ 3
	{
		int n;
		int sum = 0;
	
		for (int i = 0; i <= n; i += 2) {
			sum += i;
		}
	
		std::cout << "Результат =" << sum << std::endl;
	}
	
	// ЗАВДАННЯ 4
	{
		int n;
		int mul;
		long prev = 1;
		int d; // різниця
		int a1 // перший член прогресії
	
		for (int i = 0; i < n; i++) {
	        mul = a1 + i * d; 
			prev *= mul;
	    }
	
		std::cout << "Добуток перших елементів прогресії = " << prev << std::endl;
	}
	
	// ЗАВДАННЯ 5
	{
		double x;
		double k = 0.01; // крок
		double pi = M_PI
	
		for (x = 0; x <= pi; x += k) {
		}
	}
}
