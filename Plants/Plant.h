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
	Plant(string, int, double);
	~Plant();
};

Plant::Plant(string identification = "", int treeHeight = 0, double SpanOfLife = 0.0) {
	ID = identification;
	size = treeHeight;
	life = SpanOfLife;
}

Plant::~Plant() {
	cout << " This is the end of the Plant program." << endl;
}
#endif // End plant definition.

