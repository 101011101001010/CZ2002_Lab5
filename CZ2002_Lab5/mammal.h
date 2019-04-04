#pragma once
#include "animal.h"

class Mammal : public Animal {
public:
	Mammal(string n, COLOR c) : Animal(n, c) {
		cout << "constructing Mammal object " << endl;
	}

	~Mammal() {
		cout << "destructing Mammal object " << endl;
	}

	void eat() const {
		cout << _name << " eats " << endl;
	}

	void move() const {
		cout << _name << " moves " << endl;
	}
};