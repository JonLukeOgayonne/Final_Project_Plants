/*
	JonLuke R. Ogayonne
	CIS 1202 501
	May 04, 2021
*/
#include <iostream>
#include<string>
#include "Plant.h"
#include "Tree.h"
#include "Flower.h"
using namespace std;

int main() {
	// data types.
	string plantID, plantColor;
	int plantSize;
	double plantLifespan;
	int plantFruit;
	// Prompt user to enter plant data.
	cout << " Enter the name of the tree: ";
	getline(cin, plantID);
	cout << " Enter the foot size of the tree: ";
	cin >> plantSize;
	cout << " Enter the lifespan, of the tree, in years: ";
	cin >> plantLifespan;
	cout << " Does this tree give fruit?\n If yes enter the number 1, but if no enter 0: ";
	cin >> plantFruit;
	cin.ignore();
	// Loop when user enters a number besides 1 and 0.
	while (plantFruit > 1 || plantFruit < 0) {
		cout << " Invalid entry.\n Please enter a valid yes or no: ";
		cin >> plantFruit;
	}
	// Create tree class.
	Tree tree(plantID, plantSize, plantLifespan, plantFruit);
	// Display the contents of the tree.
	cout << "\n Plant description:\n\n Tree\n ID: " << tree.displayID() << "\n Size: ";
	cout << tree.displaySize() << " feet\n Lifespan: up to " << tree.displayLife() << " years\n";
	cout << " Does it bare fruit?: ";
	// If statement to determine that tree gives fruit.
	if (tree.getFruit() == 1) {
		cout << " Yes\n" << endl;
	}
	else {
		cout << " No\n" << endl;
	}
	//
	// Prompt user to enter flower data.
	cout << " Enter the name of the flower: ";
	getline(cin, plantID);
	cout << " Enter the size of the flower, in inches: ";
	cin >> plantSize;
	cout << " Enter the lifespan of the flower, in months: ";
	cin >> plantLifespan;
	cin.ignore();
	cout << " Enter the color of the flower peddles: ";
	getline(cin, plantColor);
	// Create flower class.
	Flower flower(plantID, plantSize, plantLifespan, plantColor);
	// Display the contents of the tree.
	cout << "\n Plant description:\n\n Flower\n ID: " << flower.displayID() << "\n Size: ";
	cout << flower.displaySize() << " inches\n Lifespan: up to " << flower.displayLife() << " months\n";
	cout << " Color: " << flower.getPeddleColor() << endl;
	// Terminate program.
	return 0;
}