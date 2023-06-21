#include <iostream>
#include "StructsFaction.h"

using namespace std;

ResultFraction Sum(Fraction fr1, Fraction fr2) {
	ResultFraction resultfr;
	if (fr1.denominator == fr2.denominator) {
		resultfr.fraction.numerator = fr1.numerator + fr2.numerator;
		resultfr.fraction.denominator = fr1.denominator;
	}
	else {
		resultfr.fraction.numerator = fr1.numerator * fr2.denominator + fr2.numerator * fr1.denominator;
		resultfr.fraction.denominator = fr1.denominator * fr2.denominator;
	}
	return resultfr;
}

ResultFraction Subtraction(Fraction fr1, Fraction fr2) {
	ResultFraction resultfr;
	if (fr1.denominator == fr2.denominator) {
		resultfr.fraction.numerator = fr1.numerator - fr2.numerator;
		resultfr.fraction.denominator = fr1.denominator;
	}
	else {
		resultfr.fraction.numerator = fr1.numerator * fr2.denominator - fr2.numerator * fr1.denominator;
		resultfr.fraction.denominator = fr1.denominator * fr2.denominator;
	}
	return resultfr;
}

ResultFraction Multiply(Fraction fr1, Fraction fr2) {
	ResultFraction resultfr;
	resultfr.fraction.numerator = fr1.numerator * fr2.numerator;
	resultfr.fraction.denominator = fr1.denominator * fr2.denominator;
	return resultfr;
}

ResultFraction Divid(Fraction fr1, Fraction fr2) {
	ResultFraction resultfr;
	resultfr.fraction.numerator = fr1.numerator * fr2.denominator;
	resultfr.fraction.denominator = fr1.denominator * fr2.numerator;
	return resultfr;
}

ResultFraction ReductionFraction(ResultFraction resultfr) {
	while (resultfr.fraction.numerator % 5 == 0 && resultfr.fraction.denominator % 5 == 0) {
		resultfr.fraction.numerator /= 5;
		resultfr.fraction.denominator /= 5;
	}

	while (resultfr.fraction.numerator % 2 == 0 && resultfr.fraction.denominator % 2 == 0) {
		resultfr.fraction.numerator /= 2;
		resultfr.fraction.denominator /= 2;
	}

	while (resultfr.fraction.numerator % 3 == 0 && resultfr.fraction.denominator % 3 == 0) {
		resultfr.fraction.numerator /= 3;
		resultfr.fraction.denominator /= 3;
	}
	return resultfr;
}

bool ImproperFraction(ResultFraction resultfr) {
	return resultfr.fraction.numerator > resultfr.fraction.denominator ? true : false;
}

ResultFraction TranswormImproperFraction(ResultFraction resultfr) {
	resultfr.integer = 0;
	while (ImproperFraction(resultfr)) {
		resultfr.fraction.numerator -= resultfr.fraction.denominator;
		resultfr.integer++;
	}
	return resultfr;
}

void PrintFraction(ResultFraction resultfr) {
	cout << "result = ";
	if (resultfr.integer > 0) {
		if (resultfr.fraction.denominator == 1)
			cout << resultfr.integer * resultfr.fraction.numerator << endl;
		else if (resultfr.fraction.denominator == 1 && resultfr.fraction.numerator == 1)
			cout << resultfr.integer << endl;
		else
			cout << resultfr.integer << "(integer)  " << resultfr.fraction.numerator << " / " << resultfr.fraction.denominator << endl;
	}
	else {
		if (resultfr.fraction.denominator == 1)
			cout << resultfr.fraction.numerator << endl;
		else
			cout << resultfr.fraction.numerator << " / " << resultfr.fraction.denominator << endl;
	}
}