#pragma once
#include <iostream>
#include <string>

using namespace std;
enum COLOR { Green, Blue, White, Black, Brown };

const char* getColorName(enum COLOR color)
{
	switch (color)
	{
	case Green: return "Green";
	case Blue: return "Blue";
	case White: return "White";
	case Black: return "Black";
	case Brown: return "Brown";
	}
}

class Animal {
public:
	string _name;

	Animal(string n, COLOR c) : Animal() {
		_name = n;
		_color = c;
		cout << _name << "'s color is " << getColorName(_color) << endl;
	}

	Animal() {
		cout << "constructing Animal object " << _name << endl;
	}

	~Animal() {
		cout << "destructing Animal object " << _name << endl;
	}

	virtual void speak() const {
		cout << "Animal speaks " << endl;
	}

	virtual void move() const = 0;

private:
	COLOR _color;
};
