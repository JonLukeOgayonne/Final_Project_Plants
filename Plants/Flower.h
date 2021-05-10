#ifndef FLOWER_H
#define FLOWER_H
#include "Plant.h"
#include<string>
using namespace std;
// Definition for the class Flower structure.
class Flower : public Plant {
private:
	string peddleColor;
public:
	// Default constructor.
	Flower() : Plant() {
		peddleColor = "";
	}
	// Constructor #2
	Flower(string identification, int treeHeight, double SpanOfLife, string color)
		: Plant(identification, treeHeight, SpanOfLife) {
		peddleColor = color;
	}
	// Accessor for the tree attribute.
	string getPeddleColor() {
		return peddleColor;
	}
};
#endif // End flower definition.

