#pragma once
class Vector
{
	double* vec;
	int len;
public:
	Vector();
	Vector(int length);
	Vector(double *vector, int length);
	void addValue(int value);
	double popFront();
	double popBack();
	void print();

	// get parameters

	operator new() {

	}
	double Pos(int position);
	int getLen();
};

