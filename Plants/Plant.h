#ifndef PLANT_H
#define PLANT_H
#include<iostream>
#include<string>
using namespace std;
// Definition of class plant structure.
class Plant {
private:
	string ID;
	int size;
	double life;
public:
	Plant() {
		ID = "";
		size = 0;
		life = 0.0;
	}
	// Constructor prototype.
	Plant(string, int, double);
	// Accessors for the plant.
	string displayID() {
		return ID;
	}

	int displaySize() {
		return size;
	}

	double displayLife() {
		return life;
	}
	// Destructor prototype.
	~Plant();
};
// Constructor for the plant.
Plant::Plant(string identification, int treeHeight, double SpanOfLife) {
	ID = identification;
	size = treeHeight;
	life = SpanOfLife;
}
// Destructor for the plant.
Plant::~Plant() {
	cout << " This is the end of the Plant program." << endl;
}
#endif // End plant definition.

