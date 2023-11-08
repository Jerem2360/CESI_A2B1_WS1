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

	Fraction add(Fraction);
	Fraction negate();
	Fraction subtract(Fraction);
	Fraction multiply(Fraction);
	Fraction invert();
	Fraction divide(Fraction);

	void display();
};

