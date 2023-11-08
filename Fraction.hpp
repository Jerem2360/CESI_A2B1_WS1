#pragma once


class Fraction {
	double numerator;
	double denominator;

public:
	// initializes numerator and denominator to 1
	Fraction();
	Fraction(double, double);

	double getNumer();
	double getDenom();

	// addition
	Fraction add(Fraction);
	// negation
	Fraction negate();
	// subtraction
	Fraction subtract(Fraction);
	// multiplication
	Fraction multiply(Fraction);
	// inversion
	Fraction invert();
	// division
	Fraction divide(Fraction);

	void display();
};

