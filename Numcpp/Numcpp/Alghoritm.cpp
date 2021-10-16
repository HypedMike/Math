#include "Alghoritm.h"
#include "Vector.h"
#include "Matrix.h"

Alghoritm::Alghoritm() {
	len = 0;
	vector = Vector(0);
}

Alghoritm::Alghoritm(Vector vec) {
	len = vec.getLen();
	vector = vec;
}

Vector Alghoritm::getV() {
	return Alghoritm::vector;
}

Matrix Alghoritm::getM() {
	return Alghoritm::matrix;
}




bool Alghoritm::InsetionSort(char mode) {
	Vector comp = Alghoritm::vector;

	switch (mode) {
	case 'a': // ascendente
		for (int i = 1; i < Alghoritm::len; i++) {
			double key = Alghoritm::vector.Pos(i);
			int j = i;
			while (j > 0) {
				if (Alghoritm::vector.Pos(j - 1) > Alghoritm::vector.Pos(j)) {
					double temp = Alghoritm::vector.Pos(j);
					//Alghoritm::vector.Pos(j) = Alghoritm::vector.Pos(j - 1);

				}
			}
		}
		break;
	case 'd': // discendente

	}

	

}