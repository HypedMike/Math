#pragma once
#include "Vector.h"
#include "Matrix.h"


class Alghoritm
{
	Vector vector;
	Matrix matrix;
	int len;
public:
	Alghoritm();
	Alghoritm(Vector vec);
	Vector getV();
	Matrix getM();

	// algs

	bool InsetionSort(char mode); //return true if it's already in order
};

