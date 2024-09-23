/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Lab 1.4
 * Variant: 5
 */
#include <iostream>

int main() {
	unsigned short valA;
	int valB;
	float valC;
	double valD;

	unsigned short* pvalA;
	int *pvalB;
	float *pvalC;
	double *pvalD;

	void *pvdValA;
	
	//

	pvalA = &valA;
	pvalB = &valB;
	pvalC = &valC;
	pvalD = &valD;

	*pvalA = 1400;
	*pvalB = -386;
	*pvalC = 4.4525;
	*pvalD = -7.3e23;

	//

	int sizeValA = sizeof(valA);
	int sizeValB = sizeof(valB);
	int sizeValC = sizeof(valC);
	int sizeValD = sizeof(valD);

	int sizepValA = sizeof(pvalA);
	int sizepValB = sizeof(pvalB);
	int sizepValC = sizeof(pvalC);
	int sizepValD = sizeof(pvalD);
	
	int sizepVoidValA = sizeof(pvdValA);

	//

	pvdValA = &pvalA;
}
