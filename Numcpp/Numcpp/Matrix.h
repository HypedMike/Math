#pragma once

class Matrix
{
	double** matrix;
	int len;
	int size[2];

public:

	Matrix();
	Matrix(int rows, int columns);
	Matrix(int rows, int columns, char mode);

	/*Vector getRow(int row) {
		for (int i = 0; i < size[i]; i++) {

		}
	}*/

	void print();

};
