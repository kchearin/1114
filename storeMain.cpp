#include <iostream>
#include "store.h"
using namespace std;
int main() {
	store A, B;
	B = store(3, 2, 5, 4, 100, 200, 300, 500);
	cout << A.total() << endl;
	cout << B.total() << endl;
	cout << " A mango " << A.mango.price << endl;
	cout << " B mango " << B.mango.price << endl;
	return 123;
}