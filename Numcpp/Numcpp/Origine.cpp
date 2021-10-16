#include "Matrix.h"
#include "Vector.h"
#include <iostream>
#include "Alghoritm.h"

using namespace std;

int main() {
	double vec[] = { 2,4,3 };
	Vector v = Vector(vec, 3);
	v.print();
	cout << "\n" << v[1];
	Alghoritm(v).InsetionSort('a');
	cout << "\n";
	v.print();
}