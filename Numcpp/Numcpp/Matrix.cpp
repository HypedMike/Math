#include "Matrix.h"
#include <iostream>
#include <random>
#include <stdlib.h>
#include <time.h> 
#include "Vector.h"

Matrix::Matrix() {
	matrix = new double*[0];
	len = 0; size[1] = 0; size[0] = 0;
}

Matrix::Matrix(int rows, int columns) {
	
	size[0] = rows; size[1] = columns; len = rows;

	matrix = new double* [columns];
	for (int i = 0; i < columns; i++) {
		matrix[i] = new double[rows];
		for (int j = 0; j < rows; j++) {
			matrix[i][j] = 0;
		}
	}
}

Matrix::Matrix(int rows, int columns, char mode) {

	size[0] = rows; size[1] = columns; len = rows;

	srand(time(NULL));

	switch (mode)
	{
	case 'r':
		matrix = new double* [columns];
		for (int i = 0; i < columns; i++) {
			matrix[i] = new double[rows];
			for (int j = 0; j < rows; j++) {
				matrix[i][j] = rand() % 10;
			}
		}
		break;
	case '1':
		matrix = new double* [columns];
		for (int i = 0; i < columns; i++) {
			matrix[i] = new double[rows];
			for (int j = 0; j < rows; j++) {
				matrix[i][j] = 1;
			}
		}
		break;
	case 'f':
		matrix = new double* [columns];
		for (int i = 0; i < columns; i++) {
			matrix[i] = new double[rows];
			for (int j = 0; j < rows; j++) {
				matrix[i][j] = i + j;
			}
		}
		break;
	default:
		Matrix(rows, columns);
		break;
	}

	
}

void Matrix::print() {
	for (int i = 0; i < size[0]; i++) {
		for (int j = 0; j < size[1]; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
