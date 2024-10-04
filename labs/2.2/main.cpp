/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Lab 2.2
 * Variant: 5
 */
#include <iostream>

struct student {
	char citizenship;
	int course;
	bool hostel;
};

int main() {
	{
	student[1] = { u, 1, false };
	student[2] = { u, 3, true };
	student[3] = { e, 2, true };
	student[4] = { u, 4, false };
	student[5] = { e, 1, true };
	student[6] = { u, 3, false };
	student[7] = { e, 5, false };

	int count;
	for (int i = 0; i < 7; i++) {
		if (student[i].citizenship == e && student[i].hostel == true) {
			count++;
		}
	}
	float result = (float)count * 100 / 7;
	}
}