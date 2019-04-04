#pragma once
#include "mammal.h"

class Dog : public Mammal {
public:
	Dog(string name, COLOR c, string owner) : Mammal(name, c) {
		_owner = owner;
		cout << "constructing Dog object " << endl;
		cout << _name << "'s owner is " << _owner << endl;
	}

	~Dog() {
		cout << "destructing Dog object " << endl;
	}

	void speak() const {
		cout << _name << " woofs " << endl;
	}

	void move() const {
		cout << _name << " moves " << endl;
	}

private:
	string _owner;
};
