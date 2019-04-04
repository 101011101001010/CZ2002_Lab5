#pragma once
#include "mammal.h"

class Lion : public Mammal {
public:
	Lion(string name, COLOR c, string owner) : Mammal(name, c) {
		_owner = owner;
		cout << "constructing Lion object " << endl;
		cout << _name << "'s owner is " << _owner << endl;
	}

	~Lion() {
		cout << "destructing Lion object " << endl;
	}

	void speak() const {
		cout << _name << " roars " << endl;
	}

	void move() const {
		cout << _name << " moves " << endl;
	}

private:
	string _owner;
};