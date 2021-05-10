#ifndef TREE_H
#define TREE_H
#include "Plant.h"
#include<string>
using namespace std;
// Definition for the class Tree structure.
class Tree : public Plant {
private:
	int fruit;
public:
	// Default constructor.
	Tree() : Plant() {
		fruit = 0;
	}
	// Constructor #2
	Tree(string identification, int treeHeight, double SpanOfLife, int isFruit)
		: Plant(identification, treeHeight, SpanOfLife) {
		fruit = isFruit;
	}
	// Accessor for the tree attribute.
	int getFruit() {
		// if statement to determine if tree gives fruit.
		if (fruit == 1) {
			return fruit;
		}
		else {
			fruit = 0;
			return fruit;
		}
		return fruit;
	}
};
#endif // End tree definition.