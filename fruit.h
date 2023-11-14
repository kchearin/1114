#pragma once
#include <iostream>
using namespace std;

class fruit {
public:
	// constructor
	fruit() {
		price = 200; many = 2; // default values
	}
	fruit(float p, int n) {
		price = p;
		many = n;
	}
	// member data
	int many;
	float price;
	// member function
	float show();
};