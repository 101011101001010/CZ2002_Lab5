#include <iostream>
#include <string>
#include <vector>

#include "dog.h"
#include "cat.h"
#include "lion.h"

using namespace std;

int main() {
	int choice;
	vector<Mammal* > zooAnimals;

	do {
		cout << "Select the animal to send to Zoo: " << endl;
		cout << "(1) Dog  (2) Cat  (3) Lion  (4) Move all animals  (5) Quit" << endl;
		cin >> choice;
		
		if (choice >= 1 && choice <= 3) {
			switch (choice) {
			case 1:
				zooAnimals.push_back(new Dog("Dog", White, "Zoo Keeper"));
				break;

			case 2:
				zooAnimals.push_back(new Cat("Cat", Black, "Zoo Keeper"));
				break;

			case 3:
				zooAnimals.push_back(new Lion("Lion", Brown, "Zoo Keeper"));
				break;
			}
		}
		
		if (choice == 4) {
			for (unsigned int i = 0; i < zooAnimals.size(); i++) {
				zooAnimals[i]->move();
				zooAnimals[i]->speak();
				zooAnimals[i]->eat();
				cout << endl;
			}
		}
	} while (choice != 5);

	/*
	Animal *animalPtr = new Dog("Lassie", White, "Andy");
	animalPtr->speak();
	animalPtr->move();
	cout << endl;

	Dog dogi("Lassie", White, "Andy");
	Mammal *aniPtr = &dogi;
	Mammal &aniRef = dogi;
	Mammal aniVal = dogi;
	aniPtr->speak();
	aniRef.speak();
	aniVal.speak();
	*/

	cout << "Program exiting ..." << endl;
	return 0;
}