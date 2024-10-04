/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Lab 2.2
 * Variant: 5
 */
#include <iostream>

enum Ctzshp = {e, u};

struct Student {
	Ctzshp citizenship;
	int course;
	bool hostel;
};

int main() {
	{
		Student mrstudent[8];

		mrstudent[0] = { e, 2, true };
		mrstudent[1] = { u, 1, false };
		mrstudent[2] = { u, 3, true };
		mrstudent[3] = { e, 2, true };
		mrstudent[4] = { u, 4, false };
		mrstudent[5] = { e, 1, true };
		mrstudent[6] = { u, 3, false };
		mrstudent[7] = { e, 5, false };

		int count;
		for (int i = 0; i < 7; i++) {
			if (mrstudent[i].citizenship == e && mrstudent[i].hostel == true) {
				count++;
			}
		}
		float result = (float)count * 100 / 7;
	}
}