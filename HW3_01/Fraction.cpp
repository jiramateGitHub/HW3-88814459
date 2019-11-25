#include "Fraction.h"

Fraction::Fraction(){
	numerator = 0;
	numerator = 0;
};

Fraction::Fraction(int n, int d){
	numerator = n;
	denominator = d;
};

int Fraction::getNumerator(){
	return numerator;
}
 
int Fraction::getDenominator(){
	return denominator;
};


void Fraction::setValue(int n, int d){
	numerator = n;
	denominator = d;
};

void Fraction::print(){
	cout << numerator << "/" << denominator << endl;
};

