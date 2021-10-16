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
	bool index(int position, double value);

	// get parameters

	double Pos(int position);
	int getLen();

	// operators overload

	double operator[](int index);
	bool operator==(Vector vector);
	Vector operator+(Vector vector);
	Vector operator-(Vector vector);
	Vector operator/(Vector vector);
	Vector operator*(Vector vector);




};

