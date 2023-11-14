#pragma once
#include "fruit.h"

class store {
public:
	store() {};
	store(int a, int b, int c, int x, float d, float e, float f, float y) {
		apple = fruit(d, a);
		pear = fruit(e, b);
		peach = fruit(f, c);
		mango = fruit(y, x);
	}
	fruit apple, pear, peach, mango;
	float total();
};