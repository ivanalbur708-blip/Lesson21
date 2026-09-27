#include <iostream>
#include "Fraction.h"

class Box {
private:
	int width;
public:
   explicit Box(int w) : width(w){
		std::cout << "Box created with witdh: " << width << '\n';
	}

   friend void PrintBox(const Box& b);

};

void PrintBox(const Box& b) {
	std::cout << "Box  with witdh: " << b.width << '\n';
}


int main()
{
	Fraction f1 = Fraction(4, 7);
	Fraction f2 = Fraction(3, 7);

	f1++;
	f2--;

	//Fraction sum = Fraction::add(f1, f2);

	Fraction sum = f1 + f2;


}