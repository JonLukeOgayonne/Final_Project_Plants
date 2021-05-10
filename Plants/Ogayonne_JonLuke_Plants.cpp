/*
	JonLuke R. Ogayonne
	CIS 1202 501
	May 04, 2021
*/
#include <iostream>
#include<string>
#include "Plant.h"
#include "Tree.h"
using namespace std;

int main() {
	// data types.
	string plantID;
	int plantSize;
	double plantLifespan;
	bool plantFruit = false;
	// Prompt user to enter plant data.
	cout << " Enter the name of the tree: ";
	getline(cin, plantID);
	cout << " Enter the size of the tree: ";
	cin >> plantSize;
	cout << " Enter the lifespan of the tree: ";
	cin >> plantLifespan;
	cout << " Does this tree give fruit?\n If yes enter the number 1, but if no enter 0: ";
	cin >> plantFruit;
	// Loop when user enters a number besides 1 and 0.
	while (plantFruit > 1 || plantFruit < 0) {
		cout << " Invalid entry.\n Please enter a valid yes or no: ";
		cin >> plantFruit;
	}
	Tree tree(plantID, plantSize, plantLifespan, plantFruit);
	// Display the contents of the tree.
	cout << " This plant is a tree called " << tree.displayID() << " with a size of ";
	cout << tree.displaySize() << " feet and can live up to " << tree.displayLife() << " years.\n";
	// Terminate program.
	return 0;
}