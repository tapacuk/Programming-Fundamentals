/**
 * Done by: Taras Datsenko
 * Student Name: Taras Datsenko
 * Student Group: 121
 * Lab 2.2
 * Variant: 5
 */
#include <iostream>


enum Ctzshp { e, u };
enum Name { Egor, Nikita, Georgy, Galina, Mark };
enum City { Kyiv, Zhashkiv, Mykachevo, London, Manchester };

struct Student {
	Ctzshp citizenship;
	int course;
	bool hostel;
	Name name;
	City city;

};

int main() {
	{
		setlocale(LC_ALL, "UKRAINIAN");
		Student mrstudent[8];

		mrstudent[0] = { e, 2, true, Mark, London };
		mrstudent[1] = { u, 1, false, Egor, Zhashkiv };
		mrstudent[2] = { u, 1, true, Galina, Mykachevo };
		mrstudent[3] = { e, 3, true, Georgy, Manchester };
		mrstudent[4] = { u, 1, false, Nikita, Kyiv };
		mrstudent[5] = { e, 4, true, Mark, Manchester };
		mrstudent[6] = { u, 1, false, Georgy, Kyiv };
		mrstudent[7] = { e, 5, false, Egor, Kyiv };

		int count1 = 0;
		for (int i = 0; i < 8; i++) {
			if (mrstudent[i].citizenship == e && mrstudent[i].hostel == true) {
				count1++;
			}
		}
		float result1 = (float)count1 * 100 / 8;

		int count2 = 0;

		for (int i = 0; i < 8; i++) {
			if (mrstudent[i].course == 1 && mrstudent[i].city != Kyiv == true) {
				count2++;
			}
		}
		float result2 = (float)count2 * 100 / 8;
		std::cout << "відсоток студентів іноземців які живуть в гуртожитку: " << result1 << "%" << std::endl;
		std::cout << "відсоток студентів першокурсників з інших міст: " << result2 << "%" << std::endl;
	}
}
