#ifndef TREE_H
#define TREE_H
#include "Plant.h"
#include<string>
using namespace std;
// Definition for the class Tree structure.
class Tree : public Plant {
private:
	bool fruit;
public:
	// Default constructor.
	Tree() : Plant() {
		fruit = false;
	}
	// Constructor #2
	Tree(string identification, int treeHeight, double SpanOfLife, bool isFruit)
		: Plant(identification, treeHeight, SpanOfLife) {
		fruit = isFruit;
	}
	// Accessor for the tree attribute.
	bool getFruit() {
		return fruit;
	}
};
#endif // End tree definition.
