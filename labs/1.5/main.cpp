/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Lab 1.5
 * Variant: 5
 */
#include <iostream>

//		ЧАСТИНА 1
int main() {
	// 1 операнди
	float A = 17.4;
	float B = 3.0;
	int C = 37;
	int D = 54;

	// 2 операнди
	int D = 15;
	int E = 15;
	int F = 18;
	int G = 12;

	// ОПЕРАЦІЇ: <УЛО1> (<УЛО2> (A<ОВ1>B) <БЛО> (<УЛО3> (C<ОВ2>D)))
	// <УЛО1> = !, <УЛО2> = {}, <УЛО3> = !, <БЛО> = ^, <ОВ1> = !=, <ОВ2> = ^.

	
	bool resOP1 = !((A != B) ^ (~(C ^ D))); // операція 1
	bool resOP2 = !((D != E) ^ (~(F ^ G))); // операція 2
}

//		ЧАСТИНА 2
int main() {
	const int A = 57;
	float B = -12;
	float C = 28.543;
	float *pC;
	float D = 76;
	float E = 10987;
	int F; // short

	//A <БО1> <УО> B <АО1> <СО> C <ОВ> D <АО2> E <БО2> <БазО> F
	bool res1 = ((A&~B) + *pC) <= (D%E << sizeof(short));
	
}