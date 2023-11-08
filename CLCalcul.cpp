#include "CLCalcul.hpp"


void CLCalcul::ini(int n) {
	this->n = n;
}

CLCalcul::CLCalcul() {
	ini(0);
	cpteObj++;
}

CLCalcul::CLCalcul(int n) {
	ini(n);
	cpteObj++;
}

void CLCalcul::carre() {
	ini(n * n);
}

void CLCalcul::setN(int value) {
	ini(value);
}

int CLCalcul::getN() {
	return n;
}

int CLCalcul::getCpteObj() {
	return cpteObj;
}

int CLCalcul::cpteObj = 0;
