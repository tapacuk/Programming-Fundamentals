/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Lab 1.7
 */
#include <iostream>

// ініціалізація статичних змін (2.б)
static int svalA = 10;
static int svalB;

// блок в блокові в блокові (1.а)
void main()
{
	svalB = 20; 
	{
		static int svalC = 20;
		int valA;

		svalC = svalC + svalB;
		valA = svalC * 5;
	}

	svalA++;
	svalA += 5;

	float fltA = 18;
	int valL = 0;
	for (int i = 0; i < 5; i++)
	{
		static int svalD = 0;
		svalD++;
		int valS = 0;
		valL++;
		valS++;
	}

	char cA = '!';
	{
		char cA = '?';
		int valQ = 1;
		{
			char cA = '@';
			int valQ = 2;
			int valM = 4;
		}
		valQ = valQ + 5;
		valQ--;

	}

	for (int i = 0; i < 5; i = i + 1)
	{
		static int iA = 0;
		int iB = 0;
		iA = iA + 1;
		iB = iB + 1;
	}

	int* valPi;
	valPi = new int;
	*valPi = 15;

	int* valPw;
	valPw = new int;
	*valPw = 5;
	valPw = valPi;
	delete valPw;
}
