#include "Fraction.hpp"
#include <iostream>


Fraction::Fraction() : Fraction(1, 1) 
{ }


Fraction::Fraction(double numer, double denom) : numerator(numer), denominator(denom) 
{ }


Fraction Fraction::add(Fraction other) {
	if (other.denominator == denominator)
		return Fraction(numerator + other.numerator, denominator);

	Fraction temp1(numerator * other.denominator, denominator * other.denominator);
	Fraction temp2(other.numerator * denominator, other.denominator * denominator);
	return temp1.add(temp2);
}

Fraction Fraction::negate() {
	return Fraction(-numerator, denominator);
}

Fraction Fraction::subtract(Fraction other) {
	return add(other.negate());
}

Fraction Fraction::multiply(Fraction other) {
	return Fraction(numerator * other.numerator, denominator * other.denominator);
}

Fraction Fraction::invert() {
	return Fraction(denominator, numerator);
}

Fraction Fraction::divide(Fraction other) {
	return multiply(other.invert());
}

double Fraction::getDenom() {
	return denominator;
}

double Fraction::getNumer() {
	return numerator;
}

void Fraction::display() {
	std::cout << numerator << "/" << denominator << "\n";
}

