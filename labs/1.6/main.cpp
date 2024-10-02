/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Lab 1.6
 * Variant: 5
 */
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	// ЗАВДАННЯ 1
	{
		char ca;
		ca = '=';
		char cb = '5';
		const char CC = 'd';

		int ia;
		ia = 0x56;
		int ib = 0x10;
		const int IC = 0x72;

		std::cout << "значення char: " << ca << ", " << cb << ", " << CC << std::endl;
		std::cout << "значення int: " << ia << ", " << ib << ", " << IC << std::endl;
		std::cout << std::endl;

	}
	// ЗАВДАННЯ 2 
	{
		int a;
		float f;
		unsigned short us;

		a = 30679;
		f = 2.57e-4;
		us = 2384;

		std::cout << "початкові значення: " << a << f << us << std::endl;

		double exd;
		int exi;
		char exc;

		// явне приведення
		exd = (double)a;
		exi = (int)f;
		exc = (char)us;

		std::cout << "значення після явного приведення" << std::endl;
		std::cout << "double: " << exd << std::endl;
		std::cout << "int: " << exi << std::endl;
		std::cout << "char: " << exc << std::endl << std::endl;

		// неявне переведення
		double unexd = a;
		int unexi = f;
		char unexc = us;

		std::cout << "значення після неявного приведення" << std::endl;
		std::cout << "double: " << unexd << std::endl;
		std::cout << "int: " << unexi << std::endl;
		std::cout << "char: " << unexc << std::endl << std::endl;

		// обхід сурової типізації
		void* pVoid;

		double* pointD;
		pVoid = &a;
		pointD = (double*)pVoid;
		exd = *pointD;

		int* pointI;
		pVoid = &f;
		pointI = (int*)pVoid;
		a = *pointI;

		char* pointC;
		pVoid = &us;
		pointC = (char*)pVoid;
		us = *pointC;

		std::cout << "обхід сурової типізації:" << std::endl;
		std::cout << "double: " << exd << std::endl;
		std::cout << "int: " << a << std::endl;
		std::cout << "char: " << us << std::endl;
	}
}
