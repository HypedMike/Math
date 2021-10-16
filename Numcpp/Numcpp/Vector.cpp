#include "Vector.h"
#include <iostream>
#include <stdexcept>

Vector::Vector() {
	vec = new double[0];
	len = 0;
}

Vector::Vector(int length) {
	vec = new double[length];
	len = length;
	for (int i = 0; i < len; i++) {
		vec[i] = 0;
	}
}

Vector::Vector(double *vector, int length) {
	vec = new double[length];
	len = length;
	for (int i = 0; i < len; i++) {
		vec[i] = vector[i];
	}
}

void Vector::addValue(int value) {
	double* temp = vec;
	len++;
	vec = new double[len];
	for (int i = 0; i < len - 1; i++) {
		vec[i] = temp[i];
	}
	vec[len - 1] = value;
}

double Vector::popFront() {
	double* temp = vec;
	len--;
	vec = new double[len];
	for (int i = 0; i < len; i++) {
		vec[i] = temp[i];
	}
	return temp[len];
}

double Vector::popBack() {
	double* temp = vec;
	len--;
	vec = new double[len];
	for (int i = 1; i < len; i++) {
		vec[i] = temp[i];
	}
	return temp[0];
}

void Vector::print() {
	for (int i = 0; i < len; i++) {
		std::cout << vec[i] << " ";
	}
}

bool Vector::index(int position, double value) {
	if (position < 0 || position >= len) {
		return false;
	}
	vec[position] = value;
	return false;
}

double Vector::Pos(int position) {
	if (position < len) {
		return vec[position];
	}
	else if (position < 0) {
		throw std::invalid_argument("Index cannot be negative");
		return 0;
	}
	throw std::invalid_argument("Index is out of bounderies");
	return 0;
}

int Vector::getLen() {
	return Vector::len;
}

double Vector::operator[](int index) {
	return Vector::Pos(index);
}    // I'll optimize this one... maybe

bool Vector::operator==(Vector vector) {
	if (Vector::len != vector.getLen()) {
		return false;
	}
	for (int i = 0; i < Vector::len; i++) {
		if (vector[i] != Vector::vec[i]) {
			return false;
		}
	}
	return true;
}

Vector Vector::operator+(Vector vector) {
	if (len != vector.getLen()) {
		throw std::invalid_argument("Not same length vector");
		return *this;
	}
	Vector res = Vector(Vector::len);
	for (int i = 0; i < Vector::len; i++) {
		res = vec[i] + vector[i];
	}
	return res;

}

Vector Vector::operator-(Vector vector) {
	if (len != vector.getLen()) {
		throw std::invalid_argument("Not same length vector");
		return *this;
	}
	Vector res = Vector(Vector::len);
	for (int i = 0; i < Vector::len; i++) {
		res = vec[i] - vector[i];
	}
	return res;

}

Vector Vector::operator/(Vector vector) {
	if (len != vector.getLen()) {
		throw std::invalid_argument("Not same length vector");
		return *this;
	}
	Vector res = Vector(Vector::len);
	for (int i = 0; i < Vector::len; i++) {
		if (vector[i] == 0) {
			throw std::invalid_argument("Divided by zero");
			return *this;
		}
		res = vec[i] / vector[i];
	}
	return res;

}

Vector Vector::operator*(Vector vector) {
	if (len != vector.getLen()) {
		throw std::invalid_argument("Not same length vector");
		return *this;
	}
	Vector res = Vector(Vector::len);
	for (int i = 0; i < Vector::len; i++) {
		res = vec[i] * vector[i];
	}
	return res;

}
