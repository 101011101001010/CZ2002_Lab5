#pragma once
#include "mammal.h"

class Cat : public Mammal {
public:
	Cat(string name, COLOR c, string owner) : Mammal(name, c) {
		_owner = owner;
		cout << "constructing Cat object " << endl;
		cout << _name << "'s owner is " << _owner << endl;
	}

	~Cat() {
		cout << "destructing Cat object " << endl;
	}

	void speak() const {
		cout << _name << " meows " << endl;
	}

	void move() const {
		cout << _name << " moves " << endl;
	}

private:
	string _owner;
};